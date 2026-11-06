// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring modal dialog Android feature flags
// summary: Declares the browser_ui modal dialog feature flags so other code can reference them.
// ---

#ifndef COMPONENTS_BROWSER_UI_MODALDIALOG_ANDROID_FEATURES_H_
#define COMPONENTS_BROWSER_UI_MODALDIALOG_ANDROID_FEATURES_H_

#include "base/feature_list.h"

namespace browser_ui {

BASE_DECLARE_FEATURE(kDialogsOnLargeFormFactors);
BASE_DECLARE_FEATURE(kModalDialogLayoutWithSystemInsets);

}  // namespace browser_ui

#endif  // COMPONENTS_BROWSER_UI_MODALDIALOG_ANDROID_FEATURES_H_
