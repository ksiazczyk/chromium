// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Generic error view controller header
// summary: Declares a confirmation alert view controller that informs users they need to sign in to Chrome to use passkeys, intended as a fallback error screen.
// ---

#ifndef IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_GENERIC_ERROR_VIEW_CONTROLLER_H_
#define IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_GENERIC_ERROR_VIEW_CONTROLLER_H_

#import "ios/chrome/common/ui/confirmation_alert/confirmation_alert_view_controller.h"

// Displays a view informing the user that they need to sign in to Chrome to use
// passkeys. Prefer to use a more specific error screen instead of this one
// whenever possible.
@interface GenericErrorViewController : ConfirmationAlertViewController
@end

#endif  // IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_GENERIC_ERROR_VIEW_CONTROLLER_H_
