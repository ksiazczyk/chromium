// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DM token utilities header
// summary: Declares helpers to obtain the platform-specific DM token for a profile and to override it for testing purposes.
// ---

#ifndef CHROME_BROWSER_POLICY_DM_TOKEN_UTILS_H_
#define CHROME_BROWSER_POLICY_DM_TOKEN_UTILS_H_

#include "components/policy/core/common/cloud/dm_token.h"

class Profile;

namespace policy {

// Returns a platform specific DM Token:
//  - Browser platforms get the CBCM DM Token.
//  - Kiosk and Managed Guest Session get the device DM Token.
//  - If a nullptr is passed for |profile|, an empty test DM Token is returned.
DMToken GetDMToken(Profile* const profile = nullptr);

// Overrides the DM token returned by |GetDMToken|, used for testing purposes.
void SetDMTokenForTesting(const DMToken& dm_token);

}  // namespace policy

#endif  // CHROME_BROWSER_POLICY_DM_TOKEN_UTILS_H_
