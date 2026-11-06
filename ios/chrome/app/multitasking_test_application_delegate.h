// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Multitasking test application delegate
// summary: Declares an application delegate subclass used to set up environments for multitasking tests.
// ---

#ifndef IOS_CHROME_APP_MULTITASKING_TEST_APPLICATION_DELEGATE_H_
#define IOS_CHROME_APP_MULTITASKING_TEST_APPLICATION_DELEGATE_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/app/main_application_delegate_testing.h"

// Subclass that allows setting up environments for multitasking tests.
@interface MultitaskingTestApplicationDelegate : MainApplicationDelegate
@end

#endif  // IOS_CHROME_APP_MULTITASKING_TEST_APPLICATION_DELEGATE_H_
