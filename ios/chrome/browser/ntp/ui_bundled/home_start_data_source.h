// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Home start data source protocol
// summary: Declares the HomeStartDataSource protocol used to check whether the current new tab page is a start surface.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_UI_BUNDLED_HOME_START_DATA_SOURCE_H_
#define IOS_CHROME_BROWSER_NTP_UI_BUNDLED_HOME_START_DATA_SOURCE_H_

// Data source for information about surface status.
@protocol HomeStartDataSource

// Returns whether the current NTP is a start surface.
- (BOOL)isStartSurface;

@end

#endif  // IOS_CHROME_BROWSER_NTP_UI_BUNDLED_HOME_START_DATA_SOURCE_H_
