// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Passwords client UI delegate implementation
// summary: Implements the helper that retrieves the PasswordsClientUIDelegate for a WebContents through ManagePasswordsUIController.
// ---

#include "chrome/browser/ui/passwords/passwords_client_ui_delegate.h"

#include "chrome/browser/ui/passwords/manage_passwords_ui_controller.h"

PasswordsClientUIDelegate* PasswordsClientUIDelegateFromWebContents(
    content::WebContents* web_contents) {
  CHECK(web_contents, base::NotFatalUntil::M162);
  return ManagePasswordsUIController::FromWebContents(web_contents);
}
