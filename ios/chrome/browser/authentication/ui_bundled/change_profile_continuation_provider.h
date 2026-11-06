// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Change profile continuation provider header
// summary: Declares the ChangeProfileContinuationProvider callback type that supplies a continuation for profile changes.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_CHANGE_PROFILE_CONTINUATION_PROVIDER_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_CHANGE_PROFILE_CONTINUATION_PROVIDER_H_

#import "ios/chrome/app/change_profile_continuation.h"

// A block providing a continuation.
using ChangeProfileContinuationProvider =
    base::RepeatingCallback<ChangeProfileContinuation()>;

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_CHANGE_PROFILE_CONTINUATION_PROVIDER_H_
