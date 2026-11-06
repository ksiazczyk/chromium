// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Messages feature flags for Android
// summary: Declares base::Feature flags for the Android messages component, covering visibility callbacks, extra histograms, a hover close button, and dismissing navigation messages on page change.
// ---

#ifndef COMPONENTS_MESSAGES_ANDROID_MESSAGES_FEATURE_H_
#define COMPONENTS_MESSAGES_ANDROID_MESSAGES_FEATURE_H_

#include "base/feature_list.h"

namespace messages {

// Feature that exposes a listener to notify whether the current message
// is fully visible.
BASE_DECLARE_FEATURE(kMessagesForAndroidFullyVisibleCallback);

// Feature that enables extra histogram recordings.
BASE_DECLARE_FEATURE(kMessagesAndroidExtraHistograms);

// Feature that enables a close button when mouses hovers over.
BASE_DECLARE_FEATURE(kMessagesCloseButton);

// Feature that dismisses navigation messages on primary page changed.
BASE_DECLARE_FEATURE(kDismissNavigationMessagesOnPrimaryPageChanged);

}  // namespace messages

#endif  // COMPONENTS_MESSAGES_ANDROID_MESSAGES_FEATURE_H_
