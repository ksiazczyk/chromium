// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reader Mode chip visibility delegate protocol
// summary: Declares a delegate protocol notified when the Reader Mode chip coordinator changes the chip's visibility.
// ---

#ifndef IOS_CHROME_BROWSER_READER_MODE_UI_READER_MODE_CHIP_VISIBILITY_DELEGATE_H_
#define IOS_CHROME_BROWSER_READER_MODE_UI_READER_MODE_CHIP_VISIBILITY_DELEGATE_H_

@class ReaderModeChipCoordinator;

// A delegate for the reader mode chip visibility.
@protocol ReaderModeChipVisibilityDelegate

// Show/hide the reader mode chip.
- (void)readerModeChipCoordinator:(ReaderModeChipCoordinator*)coordinator
       didSetReaderModeChipHidden:(BOOL)hidden;

@end

#endif  // IOS_CHROME_BROWSER_READER_MODE_UI_READER_MODE_CHIP_VISIBILITY_DELEGATE_H_
