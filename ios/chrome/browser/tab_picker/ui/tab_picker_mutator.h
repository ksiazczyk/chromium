// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab picker mutator protocol
// summary: Declares the protocol for attaching the selected tabs or cancelling the tab picker.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_PICKER_UI_TAB_PICKER_MUTATOR_H_
#define IOS_CHROME_BROWSER_TAB_PICKER_UI_TAB_PICKER_MUTATOR_H_

// The tab's picker mutator.
@protocol TabPickerMutator

// Extracts and attaches the selected tabs.
- (void)attachSelectedTabs;

// Cancels the tab picker.
- (void)cancelTabPicker;

@end

#endif  // IOS_CHROME_BROWSER_TAB_PICKER_UI_TAB_PICKER_MUTATOR_H_
