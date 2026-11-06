// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Save address profile infobar modal mediator delegate protocol
// summary: Declares a delegate protocol for notifying user actions such as choosing to edit from the save address profile modal.
// ---

#ifndef IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_INFOBAR_MODAL_AUTOFILL_ADDRESS_PROFILE_SAVE_ADDRESS_PROFILE_INFOBAR_MODAL_OVERLAY_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_INFOBAR_MODAL_AUTOFILL_ADDRESS_PROFILE_SAVE_ADDRESS_PROFILE_INFOBAR_MODAL_OVERLAY_MEDIATOR_DELEGATE_H_

// Delegate to communicate modal user actions to show options to change
// languages.
@protocol SaveAddressProfileInfobarModalOverlayMediatorDelegate

// Indicates the user chose to edit on the Save/Update modal.
- (void)showEditView;

@end

#endif  // IOS_CHROME_BROWSER_OVERLAYS_UI_BUNDLED_INFOBAR_MODAL_AUTOFILL_ADDRESS_PROFILE_SAVE_ADDRESS_PROFILE_INFOBAR_MODAL_OVERLAY_MEDIATOR_DELEGATE_H_
