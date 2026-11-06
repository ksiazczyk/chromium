// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Upgrade utils header
// summary: Declares IsAppUpToDate, which reports whether the iOS Chrome app is up to date.
// ---

#ifndef IOS_CHROME_BROWSER_UPGRADE_MODEL_UPGRADE_UTILS_H_
#define IOS_CHROME_BROWSER_UPGRADE_MODEL_UPGRADE_UTILS_H_

#import <UIKit/UIKit.h>

// Returns YES if app is up to date.
bool IsAppUpToDate();

#endif  // IOS_CHROME_BROWSER_UPGRADE_MODEL_UPGRADE_UTILS_H_
