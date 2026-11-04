// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock media galleries dialog test utility implementation
// summary: Implements MockMediaGalleriesDialog, which counts gallery update calls and reports the count through a callback when destroyed.
// ---

#include "chrome/browser/media_galleries/media_galleries_dialog_controller_test_util.h"

MockMediaGalleriesDialog::MockMediaGalleriesDialog(
    DialogDestroyedCallback callback)
    : update_count_(0), dialog_destroyed_callback_(std::move(callback)) {}

MockMediaGalleriesDialog::~MockMediaGalleriesDialog() {
  std::move(dialog_destroyed_callback_).Run(update_count_);
}

void MockMediaGalleriesDialog::UpdateGalleries() {
  update_count_++;
}

int MockMediaGalleriesDialog::update_count() const {
  return update_count_;
}

void MockMediaGalleriesDialog::AcceptDialogForTesting() {
  NOTREACHED();
}
