// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring the testing GetTabModel helper
// summary: Declares tabs_api::testing::GetTabModel, a test helper that returns the tab model for a profile or crashes if it cannot be found.
// ---

#ifndef CHROME_BROWSER_UI_TABS_TAB_STRIP_API_ANDROID_TAB_MODEL_IMPL_TESTING_UTILS_H_
#define CHROME_BROWSER_UI_TABS_TAB_STRIP_API_ANDROID_TAB_MODEL_IMPL_TESTING_UTILS_H_

class Profile;
class TabModel;

namespace tabs_api::testing {

// Gets the tab model for the profile. Crashes if the tab model cannot be
// found.
TabModel& GetTabModel(Profile* profile);

}  // namespace tabs_api::testing

#endif  // CHROME_BROWSER_UI_TABS_TAB_STRIP_API_ANDROID_TAB_MODEL_IMPL_TESTING_UTILS_H_
