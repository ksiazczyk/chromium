// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Updater client utility constants
// summary: Defines the branded updater and privileged helper name constants used by the browser updater client.
// ---

#include "chrome/browser/updater/browser_updater_client_util.h"

#include "chrome/updater/updater_branding.h"

namespace updater {

constexpr char kUpdaterName[] = PRODUCT_FULLNAME_STRING;
constexpr char kPrivilegedHelperName[] = PRIVILEGED_HELPER_NAME;

}  // namespace updater
