// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safety Check Magic Stack mediator delegate protocol
// summary: Declares the SafetyCheckMagicStackMediatorDelegate protocol for handling module events such as item reconfiguration and removal of the Safety Check module.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SAFETY_CHECK_COORDINATOR_SAFETY_CHECK_MAGIC_STACK_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SAFETY_CHECK_COORDINATOR_SAFETY_CHECK_MAGIC_STACK_MEDIATOR_DELEGATE_H_

// Handles Safety Check Module events.
@protocol SafetyCheckMagicStackMediatorDelegate

// Signals that the SafetyCheckMagicStackMediator did reconfigure the existing
// item.
- (void)safetyCheckMagicStackMediatorDidReconfigureItem;

// Indicates to receiver that the Safety Check module should be removed.
- (void)removeSafetyCheckModule;

@end

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SAFETY_CHECK_COORDINATOR_SAFETY_CHECK_MAGIC_STACK_MEDIATOR_DELEGATE_H_
