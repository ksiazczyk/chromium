// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Authenticator request dialog view test API
// summary: Declares a test API that swaps and retrieves the active sheet of the WebAuthn authenticator request dialog view for use in tests.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_WEBAUTHN_AUTHENTICATOR_REQUEST_DIALOG_VIEW_TEST_API_H_
#define CHROME_BROWSER_UI_VIEWS_WEBAUTHN_AUTHENTICATOR_REQUEST_DIALOG_VIEW_TEST_API_H_

#include <memory>

class AuthenticatorRequestDialogView;
class AuthenticatorRequestDialogViewControllerViews;
class AuthenticatorRequestSheetView;

namespace test {

class AuthenticatorRequestDialogViewTestApi {
 public:
  // Replaces the current sheet on `controller`'s view with `new_sheet`.
  static void SetSheetTo(
      AuthenticatorRequestDialogViewControllerViews* controller,
      std::unique_ptr<AuthenticatorRequestSheetView> new_sheet);

  // Get a non-owning pointer to the current sheet.
  static AuthenticatorRequestSheetView* GetSheet(
      AuthenticatorRequestDialogViewControllerViews* controller);

 private:
  static AuthenticatorRequestDialogView* GetView(
      AuthenticatorRequestDialogViewControllerViews* controller);
};

}  // namespace test

#endif  // CHROME_BROWSER_UI_VIEWS_WEBAUTHN_AUTHENTICATOR_REQUEST_DIALOG_VIEW_TEST_API_H_
