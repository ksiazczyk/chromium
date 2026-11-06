// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS remote access feature flags
// summary: Defines feature flags for ChromeOS remote desktop, including shared sessions to unattended devices and auto-approval of enterprise shared sessions.
// ---

#include "remoting/host/chromeos/features.h"

#include "base/feature_list.h"

namespace remoting::features {

BASE_FEATURE(kEnableCrdSharedSessionToUnattendedDevice,
             base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kAutoApproveEnterpriseSharedSessions,
             "EnableAutoApproveEnterpriseSharedSessions",
             base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace remoting::features
