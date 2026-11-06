// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: composebox_availability.h
// summary: Declares MaybeShowComposebox and ShowComposebox functions that present the composebox for a given browser.
// ---

#ifndef IOS_CHROME_BROWSER_COMPOSEBOX_COORDINATOR_COMPOSEBOX_AVAILABILITY_H_
#define IOS_CHROME_BROWSER_COMPOSEBOX_COORDINATOR_COMPOSEBOX_AVAILABILITY_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/composebox/public/composebox_entrypoint.h"

class Browser;
@class ComposeboxFocusParams;

/// Maybe shows the composebox and returns whether it has been shown.
bool MaybeShowComposebox(Browser* browser,
                         ComposeboxEntrypoint entrypoint,
                         NSString* query = nil);

/// Shows the composebox with `params`.
void ShowComposebox(Browser* browser, ComposeboxFocusParams* params);

#endif  // IOS_CHROME_BROWSER_COMPOSEBOX_COORDINATOR_COMPOSEBOX_AVAILABILITY_H_
