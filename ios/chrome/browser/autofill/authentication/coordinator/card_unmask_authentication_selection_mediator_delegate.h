// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Card unmask authentication selection mediator delegate protocol
// summary: Declares the delegate protocol through which the selection mediator asks its coordinator to dismiss the authentication selection view.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_COORDINATOR_CARD_UNMASK_AUTHENTICATION_SELECTION_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_COORDINATOR_CARD_UNMASK_AUTHENTICATION_SELECTION_MEDIATOR_DELEGATE_H_

#import <Foundation/Foundation.h>

// The authentication selection mediator delegates dismissal to the coordinator.
@protocol CardUnmaskAuthenticationSelectionMediatorDelegate <NSObject>

// Dismiss the authentication selection view.
- (void)dismissAuthenticationSelection;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_COORDINATOR_CARD_UNMASK_AUTHENTICATION_SELECTION_MEDIATOR_DELEGATE_H_
