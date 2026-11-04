// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Outgoing share target info implementation
// summary: Implements move operations and text and file payload extraction for OutgoingShareTargetInfo, which describes an outgoing connection to a remote device.
// ---

#include "chrome/browser/nearby_sharing/outgoing_share_target_info.h"

OutgoingShareTargetInfo::OutgoingShareTargetInfo() = default;

OutgoingShareTargetInfo::OutgoingShareTargetInfo(OutgoingShareTargetInfo&&) =
    default;

OutgoingShareTargetInfo& OutgoingShareTargetInfo::operator=(
    OutgoingShareTargetInfo&&) = default;

OutgoingShareTargetInfo::~OutgoingShareTargetInfo() = default;

std::vector<OutgoingShareTargetInfo::PayloadPtr>
OutgoingShareTargetInfo::ExtractTextPayloads() {
  return std::move(text_payloads_);
}

std::vector<OutgoingShareTargetInfo::PayloadPtr>
OutgoingShareTargetInfo::ExtractFilePayloads() {
  return std::move(file_payloads_);
}
