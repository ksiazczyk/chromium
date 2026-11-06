// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reader Mode chip view controller header
// summary: Declares the view controller for the Reader Mode entrypoint chip, conforming to the FullscreenUIElement protocol.
// ---

#ifndef IOS_CHROME_BROWSER_READER_MODE_UI_READER_MODE_CHIP_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_READER_MODE_UI_READER_MODE_CHIP_VIEW_CONTROLLER_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/fullscreen/ui_bundled/fullscreen_ui_element.h"

@protocol ReaderModeOptionsCommands;

// View controller for the reader mode chip.
@interface ReaderModeChipViewController : UIViewController <FullscreenUIElement>

@property(nonatomic, weak) id<ReaderModeOptionsCommands>
    readerModeOptionsHandler;

@end

#endif  // IOS_CHROME_BROWSER_READER_MODE_UI_READER_MODE_CHIP_VIEW_CONTROLLER_H_
