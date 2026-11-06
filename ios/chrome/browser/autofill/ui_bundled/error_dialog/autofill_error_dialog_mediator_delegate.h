// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill error dialog mediator delegate protocol
// summary: Defines the Objective-C protocol through which the mediator asks its delegate to display the error dialog contents.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ERROR_DIALOG_AUTOFILL_ERROR_DIALOG_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ERROR_DIALOG_AUTOFILL_ERROR_DIALOG_MEDIATOR_DELEGATE_H_

@protocol AutofillErrorDialogMediatorDelegate <NSObject>

// Called to show the error dialog given the contents.
- (void)showErrorDialog:(NSString*)title
                message:(NSString*)message
            buttonLabel:(NSString*)buttonLabel;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ERROR_DIALOG_AUTOFILL_ERROR_DIALOG_MEDIATOR_DELEGATE_H_
