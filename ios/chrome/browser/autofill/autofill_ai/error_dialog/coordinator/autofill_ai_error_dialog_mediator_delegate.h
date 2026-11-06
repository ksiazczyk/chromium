// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill AI error dialog mediator delegate protocol
// summary: Defines the delegate protocol for showing the configured autofill AI error dialog with a completion callback.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_AUTOFILL_AI_ERROR_DIALOG_COORDINATOR_AUTOFILL_AI_ERROR_DIALOG_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_AUTOFILL_AUTOFILL_AI_ERROR_DIALOG_COORDINATOR_AUTOFILL_AI_ERROR_DIALOG_MEDIATOR_DELEGATE_H_

#import <Foundation/Foundation.h>

#import "base/functional/callback_forward.h"

// Delegate protocol for the Autofill AI error dialog mediator.
@protocol AutofillAiErrorDialogMediatorDelegate <NSObject>

// Method to perform the actual showing of the error dialog with the respective
// configurations.
- (void)showErrorDialog:(NSString*)title
                message:(NSString*)message
            buttonLabel:(NSString*)buttonLabel
        showImmediately:(BOOL)showImmediately
             completion:(base::OnceClosure)completion;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_AUTOFILL_AI_ERROR_DIALOG_COORDINATOR_AUTOFILL_AI_ERROR_DIALOG_MEDIATOR_DELEGATE_H_
