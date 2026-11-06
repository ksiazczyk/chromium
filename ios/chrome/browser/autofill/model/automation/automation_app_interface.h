// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AutomationAppInterface app-side helper interface
// summary: Declares the app-side entry point that receives JSON and sets autofill profile data for automation tests.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_MODEL_AUTOMATION_AUTOMATION_APP_INTERFACE_H_
#define IOS_CHROME_BROWSER_AUTOFILL_MODEL_AUTOMATION_AUTOMATION_APP_INTERFACE_H_

#import <Foundation/Foundation.h>

// AutomationAppInterface contains the app-side implementations for
// automation_egtest helpers which involve app-side classes.
@interface AutomationAppInterface : NSObject

// Sets autofill automation profile data in app side. Passes JSON format
// NSString to app side, extracts and sets autofill profile in app side.
+ (NSError*)setAutofillAutomationProfile:(NSString*)profileJSON;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_MODEL_AUTOMATION_AUTOMATION_APP_INTERFACE_H_
