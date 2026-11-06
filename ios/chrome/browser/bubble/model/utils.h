// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safari switcher IPH eligibility utils header
// summary: Declares IsUserNewSafariSwitcher, which reports eligibility for the Safari Switcher in-product help for new Chrome users.
// ---

#ifndef IOS_CHROME_BROWSER_BUBBLE_MODEL_UTILS_H_
#define IOS_CHROME_BROWSER_BUBBLE_MODEL_UTILS_H_

namespace segmentation_platform {
class DeviceSwitcherResultDispatcher;
}

// Returns eligibility of seeing the IPH for Safari Switcher for new chrome
// users. The critieria: 1. device switcher classifies it as the first syncing
// device.
// 2. the time since FRE is within a certain range.
bool IsUserNewSafariSwitcher(
    segmentation_platform::DeviceSwitcherResultDispatcher* dispatcher);

#endif  // IOS_CHROME_BROWSER_BUBBLE_MODEL_UTILS_H_
