// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Toolbar element with background protocol
// summary: Defines a protocol for toolbar elements that expose a background alpha setter.
// ---

#ifndef IOS_CHROME_BROWSER_TOOLBAR_UI_BUTTONS_TOOLBAR_ELEMENT_WITH_BACKGROUND_H_
#define IOS_CHROME_BROWSER_TOOLBAR_UI_BUTTONS_TOOLBAR_ELEMENT_WITH_BACKGROUND_H_

#import <UIKit/UIKit.h>

// Protocol defining a toolbar element that has a background.
@protocol ToolbarElementWithBackground

// Sets the alpha for the background color.
- (void)setBackgroundAlpha:(CGFloat)backgroundAlpha;

@end

#endif  // IOS_CHROME_BROWSER_TOOLBAR_UI_BUTTONS_TOOLBAR_ELEMENT_WITH_BACKGROUND_H_
