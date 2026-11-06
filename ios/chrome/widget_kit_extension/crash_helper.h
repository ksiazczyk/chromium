// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CrashHelper Objective-C header
// summary: Declares the CrashHelper interface used to configure crash reporting in the widget extension.
// ---

#ifndef IOS_CHROME_WIDGET_KIT_EXTENSION_CRASH_HELPER_H_
#define IOS_CHROME_WIDGET_KIT_EXTENSION_CRASH_HELPER_H_

#import <Foundation/Foundation.h>

@interface CrashHelper : NSObject
+ (void)configure;
@end

#endif  // IOS_CHROME_WIDGET_KIT_EXTENSION_CRASH_HELPER_H_
