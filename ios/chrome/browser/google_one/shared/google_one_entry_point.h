// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Google One entry point enum
// summary: Defines the GoogleOneEntryPoint enum listing sources that can trigger Google One management, such as settings, save alerts, and deep links.
// ---

#ifndef IOS_CHROME_BROWSER_GOOGLE_ONE_SHARED_GOOGLE_ONE_ENTRY_POINT_H_
#define IOS_CHROME_BROWSER_GOOGLE_ONE_SHARED_GOOGLE_ONE_ENTRY_POINT_H_

// The entry point from which Google one management was triggered.
enum class GoogleOneEntryPoint {
  // Triggered from account screen in settings.
  kSettings,
  // Triggered from no storage alert in Save to Drive.
  kSaveToDriveAlert,
  // Triggered from no storage alert in Save to Photos.
  kSaveToPhotosAlert,
  // Triggered from startup parameter URL / deep link.
  kDeepLink,
};

#endif  // IOS_CHROME_BROWSER_GOOGLE_ONE_SHARED_GOOGLE_ONE_ENTRY_POINT_H_
