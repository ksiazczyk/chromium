// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake Regmon client implementation
// summary: Implements a fake RegmonClient that records reported annotation hash codes so tests can inspect policy violation reports.
// ---

#include "chromeos/dbus/regmon/fake_regmon_client.h"

#include "chromeos/dbus/regmon/regmon_service.pb.h"

namespace chromeos {

FakeRegmonClient::FakeRegmonClient() = default;

FakeRegmonClient::~FakeRegmonClient() = default;

void FakeRegmonClient::RecordPolicyViolation(
    const regmon::RecordPolicyViolationRequest request) {
  reported_hash_codes_.push_back(request.violation().annotation_hash());
}

RegmonClient::TestInterface* FakeRegmonClient::GetTestInterface() {
  return this;
}

std::list<int32_t> FakeRegmonClient::GetReportedHashCodes() {
  return reported_hash_codes_;
}

}  // namespace chromeos
