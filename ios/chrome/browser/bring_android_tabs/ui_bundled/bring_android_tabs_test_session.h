// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bring Android Tabs test session enum
// summary: Defines an enum of foreign session types used to set up Bring Android Tabs test scenarios.
// ---

#ifndef IOS_CHROME_BROWSER_BRING_ANDROID_TABS_UI_BUNDLED_BRING_ANDROID_TABS_TEST_SESSION_H_
#define IOS_CHROME_BROWSER_BRING_ANDROID_TABS_UI_BUNDLED_BRING_ANDROID_TABS_TEST_SESSION_H_

// Enum specifying different foreign sessions used for Bring Android Tabs
// testing.
enum class BringAndroidTabsTestSession {
  kRecentFromAndroidPhone,
  kExpiredFromAndroidPhone,
  kRecentFromDesktop,
};

#endif  // IOS_CHROME_BROWSER_BRING_ANDROID_TABS_UI_BUNDLED_BRING_ANDROID_TABS_TEST_SESSION_H_
