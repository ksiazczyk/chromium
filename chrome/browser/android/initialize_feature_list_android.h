// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Early feature list initialization header
// summary: Declares DidInitFeatureListEarly to report whether the Android feature list was initialized early.
// ---

#ifndef CHROME_BROWSER_ANDROID_INITIALIZE_FEATURE_LIST_ANDROID_H_
#define CHROME_BROWSER_ANDROID_INITIALIZE_FEATURE_LIST_ANDROID_H_

namespace variations::android {

// Did we initialize the feature list early?
bool DidInitFeatureListEarly();

}  // namespace variations::android

#endif  // CHROME_BROWSER_ANDROID_INITIALIZE_FEATURE_LIST_ANDROID_H_
