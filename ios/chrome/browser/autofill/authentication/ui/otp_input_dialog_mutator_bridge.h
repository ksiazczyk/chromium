// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: otp_input_dialog_mutator_bridge.h
// summary: Declares a bridge class implementing the OtpInputDialogMutator protocol that forwards messages to a C++ target.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_UI_OTP_INPUT_DIALOG_MUTATOR_BRIDGE_H_
#define IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_UI_OTP_INPUT_DIALOG_MUTATOR_BRIDGE_H_

#import <Foundation/Foundation.h>

#import "base/memory/weak_ptr.h"
#import "ios/chrome/browser/autofill/authentication/ui/otp_input_dialog_mutator.h"

class OtpInputDialogMutatorBridgeTarget;

// This class implements the Objective-C protocol and forwards the messages to
// the C++ abstract class.
@interface OtpInputDialogMutatorBridge : NSObject <OtpInputDialogMutator>

// Create the bridge given the C++ target.
- (instancetype)initWithTarget:
    (base::WeakPtr<OtpInputDialogMutatorBridgeTarget>)target;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_AUTHENTICATION_UI_OTP_INPUT_DIALOG_MUTATOR_BRIDGE_H_
