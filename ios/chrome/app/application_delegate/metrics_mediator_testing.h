// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MetricsMediator testing category
// summary: Declares a testing category on MetricsMediator with methods to record startup and resume tab count metrics.
// ---

#ifndef IOS_CHROME_APP_APPLICATION_DELEGATE_METRICS_MEDIATOR_TESTING_H_
#define IOS_CHROME_APP_APPLICATION_DELEGATE_METRICS_MEDIATOR_TESTING_H_

#include "net/base/network_change_notifier.h"

@interface MetricsMediator (TestingAddition)
+ (void)recordStartupTabCount:(int)tabCount;
+ (void)recordResumeTabCount:(int)tabCount;
+ (void)recordStartupNTPTabCount:(int)tabCount;
+ (void)recordResumeNTPTabCount:(int)tabCount;
+ (void)recordResumeLiveNTPTabCount:(int)tabCount;
@end

#endif  // IOS_CHROME_APP_APPLICATION_DELEGATE_METRICS_MEDIATOR_TESTING_H_
