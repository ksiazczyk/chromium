// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Declarations of sync_sessions feature flags
// summary: Declares the sync_sessions base::Feature flags for use across the component.
// ---

#ifndef COMPONENTS_SYNC_SESSIONS_FEATURES_H_
#define COMPONENTS_SYNC_SESSIONS_FEATURES_H_

#include "base/feature_list.h"

namespace sync_sessions {

BASE_DECLARE_FEATURE(kOptimizeAssociateWindowsAndroid);
BASE_DECLARE_FEATURE(kFilterNavigationsBySyncSessionsClient);

}  // namespace sync_sessions

#endif  // COMPONENTS_SYNC_SESSIONS_FEATURES_H_
