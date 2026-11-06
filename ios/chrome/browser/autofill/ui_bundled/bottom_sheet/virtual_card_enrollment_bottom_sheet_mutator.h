// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Virtual card enrollment bottom sheet mutator protocol
// summary: Declares the mutator protocol that receives accept and cancel actions from the virtual card enrollment bottom sheet view controller.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_BOTTOM_SHEET_VIRTUAL_CARD_ENROLLMENT_BOTTOM_SHEET_MUTATOR_H_
#define IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_BOTTOM_SHEET_VIRTUAL_CARD_ENROLLMENT_BOTTOM_SHEET_MUTATOR_H_

#import <Foundation/Foundation.h>

// Delegate to handle actions from the virtual card enrollment bottom sheet view
// controller.
@protocol VirtualCardEnrollmentBottomSheetMutator <NSObject>

// Handles the user accepting the virtual card enrollment prompt.
- (void)didAccept;

// Handles the user dismissing the virtual card enrollment prompt.
- (void)didCancel;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_BOTTOM_SHEET_VIRTUAL_CARD_ENROLLMENT_BOTTOM_SHEET_MUTATOR_H_
