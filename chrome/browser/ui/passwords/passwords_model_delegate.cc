// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PasswordsModelDelegate implementation
// summary: Implements the helper that returns a weak pointer to the PasswordsModelDelegate for a WebContents via ManagePasswordsUIController.
// ---

#include "chrome/browser/ui/passwords/passwords_model_delegate.h"

#include "chrome/browser/ui/passwords/manage_passwords_ui_controller.h"

base::WeakPtr<PasswordsModelDelegate> PasswordsModelDelegateFromWebContents(
    content::WebContents* web_contents) {
  CHECK(web_contents, base::NotFatalUntil::M162);
  return ManagePasswordsUIController::FromWebContents(web_contents)
      ->GetModelDelegateProxy();
}
