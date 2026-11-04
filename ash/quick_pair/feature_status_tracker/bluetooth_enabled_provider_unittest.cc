// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BluetoothEnabledProvider unit tests
// summary: Unit tests for BluetoothEnabledProvider using a fake Bluetooth adapter to verify behavior across powered, present, and hardware offloading state changes.
// relations:
//   - tests /ash/quick_pair/feature_status_tracker/bluetooth_enabled_provider.h
//   - depends_on /ash/quick_pair/common/fake_bluetooth_adapter.h
// ---

#include "ash/quick_pair/feature_status_tracker/bluetooth_enabled_provider.h"

#include <memory>

#include "ash/quick_pair/common/fake_bluetooth_adapter.h"
#include "base/functional/callback.h"
#include "base/memory/scoped_refptr.h"
#include "base/test/mock_callback.h"
#include "device/bluetooth/bluetooth_adapter_factory.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace ash {
namespace quick_pair {

class BluetoothEnabledProviderTest : public testing::Test {
 public:
  void SetUp() override {
    adapter_ = base::MakeRefCounted<FakeBluetoothAdapter>();
    device::BluetoothAdapterFactory::SetAdapterForTesting(adapter_);
    EXPECT_CALL(adapter(), AddObserver);

    provider_ = std::make_unique<BluetoothEnabledProvider>();
  }

  void TearDown() override {
    EXPECT_CALL(adapter(), RemoveObserver(provider_.get()));
  }

  FakeBluetoothAdapter& adapter() { return *(adapter_.get()); }

 protected:
  scoped_refptr<FakeBluetoothAdapter> adapter_;
  std::unique_ptr<BluetoothEnabledProvider> provider_;
};

TEST_F(BluetoothEnabledProviderTest, IsInitallyDisabled) {
  base::MockCallback<base::RepeatingCallback<void(bool)>> callback;
  EXPECT_CALL(callback, Run).Times(0);

  EXPECT_FALSE(provider_->is_enabled());
}

TEST_F(BluetoothEnabledProviderTest, GetsEnabledWhenAdapterIsPowered) {
  base::MockCallback<base::RepeatingCallback<void(bool)>> callback;
  EXPECT_CALL(callback, Run(true));
  provider_->SetCallback(callback.Get());

  adapter().SetBluetoothIsPowered(true);
  EXPECT_TRUE(provider_->is_enabled());
}

TEST_F(BluetoothEnabledProviderTest, TogglesStateBasedOnAdapterIsPowered) {
  base::MockCallback<base::RepeatingCallback<void(bool)>> callback;
  {
    testing::InSequence sequence;
    EXPECT_CALL(callback, Run(true));
    EXPECT_CALL(callback, Run(false));
    EXPECT_CALL(callback, Run(true));
  }

  provider_->SetCallback(callback.Get());

  adapter().SetBluetoothIsPowered(true);
  EXPECT_TRUE(provider_->is_enabled());
  adapter().SetBluetoothIsPowered(false);
  EXPECT_FALSE(provider_->is_enabled());
  adapter().SetBluetoothIsPowered(true);
  EXPECT_TRUE(provider_->is_enabled());
}

TEST_F(BluetoothEnabledProviderTest, NoHardwareSupport) {
  adapter().SetHardwareOffloadingStatus(
      device::BluetoothAdapter::LowEnergyScanSessionHardwareOffloadingStatus::
          kNotSupported);
  EXPECT_FALSE(provider_->is_enabled());

  adapter().SetBluetoothIsPowered(true);
  EXPECT_FALSE(provider_->is_enabled());
}

TEST_F(BluetoothEnabledProviderTest, HasHardwareSupport) {
  adapter().SetHardwareOffloadingStatus(
      device::BluetoothAdapter::LowEnergyScanSessionHardwareOffloadingStatus::
          kSupported);
  EXPECT_FALSE(provider_->is_enabled());

  adapter().SetBluetoothIsPowered(true);
  EXPECT_TRUE(provider_->is_enabled());
}

TEST_F(BluetoothEnabledProviderTest, HardwareSupportBecomesAvailable) {
  adapter().SetHardwareOffloadingStatus(
      device::BluetoothAdapter::LowEnergyScanSessionHardwareOffloadingStatus::
          kNotSupported);
  EXPECT_FALSE(provider_->is_enabled());

  adapter().SetBluetoothIsPowered(true);
  EXPECT_FALSE(provider_->is_enabled());

  adapter().SetHardwareOffloadingStatus(
      device::BluetoothAdapter::LowEnergyScanSessionHardwareOffloadingStatus::
          kSupported);
  EXPECT_TRUE(provider_->is_enabled());
}

TEST_F(BluetoothEnabledProviderTest, AdapterPresentChanges) {
  EXPECT_FALSE(provider_->is_enabled());
  adapter().SetBluetoothIsPresent(true);
  EXPECT_FALSE(provider_->is_enabled());
  adapter().SetBluetoothIsPowered(true);
  EXPECT_TRUE(provider_->is_enabled());
}

}  // namespace quick_pair
}  // namespace ash
