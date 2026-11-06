// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Level Up welcome header view interface
// summary: Declares a collection view cell that displays the user's avatar image and full name on the Level Up dashboard.
// ---

#ifndef IOS_CHROME_BROWSER_LEVEL_UP_UI_LEVEL_UP_WELCOME_HEADER_VIEW_H_
#define IOS_CHROME_BROWSER_LEVEL_UP_UI_LEVEL_UP_WELCOME_HEADER_VIEW_H_

#import <UIKit/UIKit.h>

// View displaying the welcome user header profile details on the dashboard.
@interface LevelUpWelcomeHeaderView : UICollectionViewCell

// The user avatar image.
@property(nonatomic, strong) UIImage* userAvatar;

// The user's full name.
@property(nonatomic, copy) NSString* userFullName;

@end

#endif  // IOS_CHROME_BROWSER_LEVEL_UP_UI_LEVEL_UP_WELCOME_HEADER_VIEW_H_
