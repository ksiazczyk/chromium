// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feature flag definitions for modal dialogs on Android
// summary: Defines the browser_ui features kDialogsOnLargeFormFactors and kModalDialogLayoutWithSystemInsets, both enabled by default.
// ---

#include "components/browser_ui/modaldialog/android/features.h"

#include "base/feature_list.h"
#include "base/metrics/field_trial_params.h"

namespace browser_ui {

BASE_FEATURE(kDialogsOnLargeFormFactors, base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kModalDialogLayoutWithSystemInsets,
             base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace browser_ui
