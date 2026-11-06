// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OTP input dialog mediator delegate protocol
// summary: Declares the delegate protocol the mediator uses to request dismissal of the OTP input dialog.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_COORDINATOR_OTP_INPUT_DIALOG_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_COORDINATOR_OTP_INPUT_DIALOG_MEDIATOR_DELEGATE_H_

#import <Foundation/Foundation.h>

// The delegate interface that takes calls from the mediator.
@protocol OtpInputDialogMediatorDelegate <NSObject>

// Close the dialog and terminate all related classes.
- (void)dismissDialog;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_COORDINATOR_OTP_INPUT_DIALOG_MEDIATOR_DELEGATE_H_
