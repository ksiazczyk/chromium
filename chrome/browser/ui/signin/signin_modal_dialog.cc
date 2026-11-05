// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SigninModalDialog base class implementation
// summary: Implements the sign-in modal dialog base class, managing the close callback and notifying listeners exactly once when the modal dialog is closed.
// ---

#include "chrome/browser/ui/signin/signin_modal_dialog.h"

#include <ostream>

#include "base/check.h"

SigninModalDialog::SigninModalDialog(base::OnceClosure on_close_callback)
    : on_close_callback_(std::move(on_close_callback)) {
  CHECK(on_close_callback_, base::NotFatalUntil::M162);
}

SigninModalDialog::~SigninModalDialog() {
  DCHECK(!on_close_callback_) << "NotifyModalDialogClosed() must have been "
                                 "called before `this` is destroyed.";
}

void SigninModalDialog::NotifyModalDialogClosed() {
  CHECK(on_close_callback_, base::NotFatalUntil::M162);
  std::move(on_close_callback_).Run();
}
