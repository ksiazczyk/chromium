// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome Remote Desktop feature flags
// summary: Declares feature flags for allowing shared CRD sessions to the login/lock screen and auto-approving enterprise shared CRD session connections.
// ---

#ifndef REMOTING_HOST_CHROMEOS_FEATURES_H_
#define REMOTING_HOST_CHROMEOS_FEATURES_H_

#include "base/feature_list.h"

namespace remoting::features {

// Enable to allow shared CRD session to the login/lock screen.
BASE_DECLARE_FEATURE(kEnableCrdSharedSessionToUnattendedDevice);

// Enable to auto-approve session connect request for enterprise shared CRD
// sessions.
BASE_DECLARE_FEATURE(kAutoApproveEnterpriseSharedSessions);

}  // namespace remoting::features

#endif  // REMOTING_HOST_CHROMEOS_FEATURES_H_
