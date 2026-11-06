// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SendTabToSelfMediatorDelegate protocol
// summary: Declares the mediator delegate protocol with callbacks to stop the mediator or refresh the send tab to self view.
// ---

#ifndef IOS_CHROME_BROWSER_SEND_TAB_TO_SELF_COORDINATOR_SEND_TAB_TO_SELF_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_SEND_TAB_TO_SELF_COORDINATOR_SEND_TAB_TO_SELF_MEDIATOR_DELEGATE_H_

@class SendTabToSelfMediator;

@protocol SendTabToSelfMediatorDelegate

// Requests to stop the send-tab-to-self
- (void)mediatorWantsToBeStopped:(SendTabToSelfMediator*)mediator;

// Requests to refresh the view’s content.
- (void)mediatorWantsToRefreshView:(SendTabToSelfMediator*)mediator;

@end

#endif  // IOS_CHROME_BROWSER_SEND_TAB_TO_SELF_COORDINATOR_SEND_TAB_TO_SELF_MEDIATOR_DELEGATE_H_
