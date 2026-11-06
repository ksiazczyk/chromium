// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake Regmon client header
// summary: Declares FakeRegmonClient, a test double of RegmonClient that implements the test interface and stores reported hash codes.
// ---

#ifndef CHROMEOS_DBUS_REGMON_FAKE_REGMON_CLIENT_H_
#define CHROMEOS_DBUS_REGMON_FAKE_REGMON_CLIENT_H_

#include <cstdint>

#include "chromeos/dbus/regmon/regmon_client.h"
#include "chromeos/dbus/regmon/regmon_service.pb.h"

namespace chromeos {

class COMPONENT_EXPORT(REGMON) FakeRegmonClient
    : public RegmonClient,
      public RegmonClient::TestInterface {
 public:
  FakeRegmonClient();
  FakeRegmonClient(const FakeRegmonClient&) = delete;
  FakeRegmonClient& operator=(const FakeRegmonClient&) = delete;
  ~FakeRegmonClient() override;

  // RegmonClient implementation:
  void RecordPolicyViolation(
      const regmon::RecordPolicyViolationRequest request) override;

  RegmonClient::TestInterface* GetTestInterface() override;

  // RegmonClient::TestInterface implementation:
  std::list<int32_t> GetReportedHashCodes() override;

 private:
  std::list<int32_t> reported_hash_codes_;
};

}  // namespace chromeos

#endif  // CHROMEOS_DBUS_REGMON_FAKE_REGMON_CLIENT_H_
