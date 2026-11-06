// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PasswordExportHandler protocol for export UI actions
// summary: Declares a protocol for showing the share sheet, error alerts, preparing-passwords alerts and passcode dialogs during the password export flow.
// ---

#ifndef IOS_CHROME_BROWSER_PASSWORDS_PASSWORD_EXPORTER_COORDINATOR_PASSWORD_EXPORT_HANDLER_H_
#define IOS_CHROME_BROWSER_PASSWORDS_PASSWORD_EXPORTER_COORDINATOR_PASSWORD_EXPORT_HANDLER_H_

// Protocol which handles showing alerts or ActivityViews in response to steps
// in the password export flow – essentially, the parts which are not allowed
// to happen in the ViewController.
@protocol PasswordExportHandler

// Displays the "share sheet" UI with the activity items provided by the
// password exporter.
- (void)showActivityViewWithActivityItems:(NSArray*)activityItems
                        completionHandler:
                            (void (^)(NSString*, BOOL, NSArray*, NSError*))
                                completionHandler;

// Displays an error message. The error message is already localized when
// provided to this method; the implementer should simply show it.
- (void)showExportErrorAlertWithLocalizedReason:(NSString*)errorReason;

// Shows an alert while the payload for export is being prepared. The purpose
// is similar to a loading spinner.
- (void)showPreparingPasswordsAlert;

// Shows a dialog requiring the user to set a device passcode before proceeding.
- (void)showSetPasscodeForPasswordExportDialog;

@end

#endif  // IOS_CHROME_BROWSER_PASSWORDS_PASSWORD_EXPORTER_COORDINATOR_PASSWORD_EXPORT_HANDLER_H_
