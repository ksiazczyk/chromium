// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Profile app feature declarations
// summary: Header declaring Chrome feature flags for logging application storage size metrics and disabling CookieStoreIOS flush on backgrounding.
// ---

#ifndef IOS_CHROME_APP_PROFILE_FEATURES_H_
#define IOS_CHROME_APP_PROFILE_FEATURES_H_

#import "base/feature_list.h"

BASE_DECLARE_FEATURE(kLogApplicationStorageSizeMetrics);

// Feature to disable CookieStoreIOS::FlushStore when the application enters the
// background.
BASE_DECLARE_FEATURE(kDisableCookieStoreIOSFlushOnBackgrounding);

#endif  // IOS_CHROME_APP_PROFILE_FEATURES_H_
