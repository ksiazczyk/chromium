// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Change profile send tab to other device header
// summary: Declares CreateChangeProfileSendTabToOtherDevice, a continuation that opens a URL and shows the Send tab to your device UI with title and entry point.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_CHANGE_PROFILE_CHANGE_PROFILE_SEND_TAB_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_CHANGE_PROFILE_CHANGE_PROFILE_SEND_TAB_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/app/change_profile_continuation.h"

class GURL;
namespace send_tab_to_self {
enum class ShareEntryPoint;
}

// Returns a ChangeProfileContinuation that opens the provided URL and the
// option to Send to your device. This URL usually comes from a tab with this
// URL in the previous profile. In this case, it’s the caller responsibility to
// close this tab before the profile switching.

ChangeProfileContinuation CreateChangeProfileSendTabToOtherDevice(
    GURL url,
    NSString* title,
    send_tab_to_self::ShareEntryPoint entry_point);

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_CHANGE_PROFILE_CHANGE_PROFILE_SEND_TAB_H_
