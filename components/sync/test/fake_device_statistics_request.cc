// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake device statistics request implementation
// summary: Implements a fake DeviceStatisticsRequest that lets tests simulate success or failure of device statistics fetches.
// ---

#include "components/sync/test/fake_device_statistics_request.h"

#include "base/check.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace syncer {

FakeDeviceStatisticsRequest::FakeDeviceStatisticsRequest() = default;
FakeDeviceStatisticsRequest::~FakeDeviceStatisticsRequest() = default;

void FakeDeviceStatisticsRequest::Start(base::OnceClosure callback) {
  CHECK_EQ(state_, State::kNotStarted);
  state_ = State::kInProgress;
  callback_ = std::move(callback);
}

DeviceStatisticsRequest::State FakeDeviceStatisticsRequest::GetState() const {
  return state_;
}

const std::vector<sync_pb::SyncEntity>&
FakeDeviceStatisticsRequest::GetResults() const {
  CHECK_EQ(state_, State::kComplete);
  return results_;
}

void FakeDeviceStatisticsRequest::SimulateSuccess(
    std::vector<sync_pb::SyncEntity> results) {
  ASSERT_EQ(state_, State::kInProgress);
  state_ = State::kComplete;
  results_ = std::move(results);
  if (callback_) {
    std::move(callback_).Run();
  }
}

void FakeDeviceStatisticsRequest::SimulateFailure() {
  ASSERT_EQ(state_, State::kInProgress);
  state_ = State::kFailed;
  if (callback_) {
    std::move(callback_).Run();
  }
}

}  // namespace syncer
