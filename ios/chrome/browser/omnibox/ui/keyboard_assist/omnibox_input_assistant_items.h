// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Omnibox input assistant items interface
// summary: Declares functions that build the leading and trailing bar button groups for the omnibox input assistant.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_UI_KEYBOARD_ASSIST_OMNIBOX_INPUT_ASSISTANT_ITEMS_H_
#define IOS_CHROME_BROWSER_OMNIBOX_UI_KEYBOARD_ASSIST_OMNIBOX_INPUT_ASSISTANT_ITEMS_H_

#import <UIKit/UIKit.h>

@protocol OmniboxAssistiveKeyboardDelegate;

// Returns the leading button groups for the omnibox's inputAssistantItem.
NSArray<UIBarButtonItemGroup*>* OmniboxAssistiveKeyboardLeadingBarButtonGroups(
    id<OmniboxAssistiveKeyboardDelegate> delegate,
    id<UIPasteConfigurationSupporting> pasteTarget,
    bool use_lens = false);

// Returns the trailing button groups for the omnibox's inputAssistantItem.
NSArray<UIBarButtonItemGroup*>* OmniboxAssistiveKeyboardTrailingBarButtonGroups(
    id<OmniboxAssistiveKeyboardDelegate> delegate,
    NSArray<NSString*>* buttonTitles);

#endif  // IOS_CHROME_BROWSER_OMNIBOX_UI_KEYBOARD_ASSIST_OMNIBOX_INPUT_ASSISTANT_ITEMS_H_
