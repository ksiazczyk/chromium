// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Omnibox thumbnail button interface
// summary: Declares OmniboxThumbnailButton, a UIButton subclass that shows a thumbnail image in the omnibox and displays a blue discard-intent overlay when selected.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_UI_OMNIBOX_THUMBNAIL_BUTTON_H_
#define IOS_CHROME_BROWSER_OMNIBOX_UI_OMNIBOX_THUMBNAIL_BUTTON_H_

#import <UIKit/UIKit.h>

// Thumbnail button optionally shown in the Omnibox.
//
// When this button is in `UIControlStateSelected` state, it displays a blue
// overlay indicating the image is about to be dismissed.
@interface OmniboxThumbnailButton : UIButton

// The thumbnail image shown in the omnibox or `nil` if there is no image set.
@property(nonatomic, strong) UIImage* thumbnailImage;

@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_UI_OMNIBOX_THUMBNAIL_BUTTON_H_
