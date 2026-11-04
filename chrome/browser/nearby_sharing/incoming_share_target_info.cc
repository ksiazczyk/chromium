// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Incoming share target info implementation
// summary: Provides the default move constructor, move assignment operator, and destructor for the IncomingShareTargetInfo class.
// ---

#include "chrome/browser/nearby_sharing/incoming_share_target_info.h"

IncomingShareTargetInfo::IncomingShareTargetInfo() = default;

IncomingShareTargetInfo::IncomingShareTargetInfo(IncomingShareTargetInfo&&) =
    default;

IncomingShareTargetInfo& IncomingShareTargetInfo::operator=(
    IncomingShareTargetInfo&&) = default;

IncomingShareTargetInfo::~IncomingShareTargetInfo() = default;
