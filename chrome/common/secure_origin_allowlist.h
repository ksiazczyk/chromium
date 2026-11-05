// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Secure origin allowlist header
// summary: Declares functions returning schemes that bypass the secure context check and registering secure origin allowlist preferences.
// ---

#ifndef CHROME_COMMON_SECURE_ORIGIN_ALLOWLIST_H_
#define CHROME_COMMON_SECURE_ORIGIN_ALLOWLIST_H_

#include <set>
#include <string>

class PrefRegistrySimple;

namespace secure_origin_allowlist {

// Returns a allowlist of schemes that should bypass the Is Privileged Context
// check. See http://www.w3.org/TR/powerful-features/#settings-privileged.
std::set<std::string> GetSchemesBypassingSecureContextCheck();

// Register preferences for Secure Origin Allowlists.
void RegisterPrefs(PrefRegistrySimple* local_state);

}  // namespace secure_origin_allowlist

#endif  // CHROME_COMMON_SECURE_ORIGIN_ALLOWLIST_H_
