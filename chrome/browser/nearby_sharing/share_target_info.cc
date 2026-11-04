// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Share target info implementation
// summary: Implements default move constructors and assignment for ShareTargetInfo, which holds per-target connection state.
// ---

#include "chrome/browser/nearby_sharing/share_target_info.h"

#include "chromeos/ash/components/nearby/common/connections_manager/nearby_connection.h"

ShareTargetInfo::ShareTargetInfo() = default;

ShareTargetInfo::ShareTargetInfo(ShareTargetInfo&&) = default;

ShareTargetInfo& ShareTargetInfo::operator=(ShareTargetInfo&&) = default;

ShareTargetInfo::~ShareTargetInfo() = default;
