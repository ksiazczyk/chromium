// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: YouTube Incognito sheet delegate protocol
// summary: Defines the YoutubeIncognitoSheetDelegate protocol with callbacks for primary and secondary action button taps.
// ---

#ifndef IOS_CHROME_BROWSER_YOUTUBE_INCOGNITO_UI_YOUTUBE_INCOGNITO_SHEET_DELEGATE_H_
#define IOS_CHROME_BROWSER_YOUTUBE_INCOGNITO_UI_YOUTUBE_INCOGNITO_SHEET_DELEGATE_H_

#import <Foundation/Foundation.h>

// Delegate protocol for YoutubeIncognitoSheet.
@protocol YoutubeIncognitoSheetDelegate <NSObject>

- (void)didTapPrimaryActionButton;
- (void)didTapSecondaryActionButton;

@end

#endif  // IOS_CHROME_BROWSER_YOUTUBE_INCOGNITO_UI_YOUTUBE_INCOGNITO_SHEET_DELEGATE_H_
