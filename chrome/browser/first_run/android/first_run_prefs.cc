// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: First-run preference name for CCT ToS dialog behavior
// summary: Defines the local-state preference name that controls whether the terms-of-service dialog is shown during first run for CCTs.
// ---

#include "chrome/browser/first_run/android/first_run_prefs.h"

namespace first_run {

// Whether the ToS should be shown during the first-run for CCTs.
const char kTosDialogBehavior[] = "policy.cct_tos_dialog_behavior";

}  // namespace first_run
