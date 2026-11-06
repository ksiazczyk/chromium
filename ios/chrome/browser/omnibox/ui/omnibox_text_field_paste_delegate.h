// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OmniboxTextFieldPasteDelegate header
// summary: Declares OmniboxTextFieldPasteDelegate, a UITextPasteDelegate used to work around crbug 755620 when pasting into the omnibox.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_UI_OMNIBOX_TEXT_FIELD_PASTE_DELEGATE_H_
#define IOS_CHROME_BROWSER_OMNIBOX_UI_OMNIBOX_TEXT_FIELD_PASTE_DELEGATE_H_

#import <UIKit/UIKit.h>

@protocol OmniboxTextInput;

// Implements UITextPasteDelegate to workaround http://crbug.com/755620.
@interface OmniboxTextFieldPasteDelegate : NSObject

/// Omnibox text input. Used to retrieve attributes applied to pasted text.
@property(nonatomic, weak) id<OmniboxTextInput> textInput;

@end

@interface OmniboxTextFieldPasteDelegate (UITextPasteDelegate) <
    UITextPasteDelegate>
@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_UI_OMNIBOX_TEXT_FIELD_PASTE_DELEGATE_H_
