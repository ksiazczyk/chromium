// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WidgetMetricsUtil Objective-C header
// summary: Declares the WidgetMetricsUtil class with methods for logging installed widgets and deleted-account UI counts.
// ---

#ifndef IOS_CHROME_BROWSER_WIDGET_KIT_MODEL_WIDGET_METRICS_UTIL_H_
#define IOS_CHROME_BROWSER_WIDGET_KIT_MODEL_WIDGET_METRICS_UTIL_H_

#import <Foundation/Foundation.h>

@interface WidgetMetricsUtil : NSObject

+ (void)logInstalledWidgets;

+ (void)logWidgetDeletedUiCount;

@end

#endif  // IOS_CHROME_BROWSER_WIDGET_KIT_MODEL_WIDGET_METRICS_UTIL_H_
