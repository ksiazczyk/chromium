// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: System alert handler for Earl Grey tests
// summary: Header declaring SystemAlertHandlerImpl, which closes visible system alerts to unblock the UI during Earl Grey tests.
// ---

#ifndef IOS_TESTING_EARL_GREY_SYSTEM_ALERT_HANDLER_H_
#define IOS_TESTING_EARL_GREY_SYSTEM_ALERT_HANDLER_H_

#import "ios/testing/earl_grey/base_eg_test_helper_impl.h"

#define SystemAlertHandler \
  [SystemAlertHandlerImpl invokedFromFile:@"" __FILE__ lineNumber:__LINE__]

@interface SystemAlertHandlerImpl : BaseEGTestHelperImpl

// Handles system alerts if any are present, closing them to unblock the UI.
- (void)handleSystemAlertIfVisible;

@end

#endif  // IOS_TESTING_EARL_GREY_SYSTEM_ALERT_HANDLER_H_
