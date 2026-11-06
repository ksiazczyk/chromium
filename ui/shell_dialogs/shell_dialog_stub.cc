// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub select file dialog factory
// summary: Stub CreateSelectFileDialog implementation that marks the feature as unimplemented and returns null on unsupported platforms.
// ---

#include "base/notimplemented.h"
#include "ui/shell_dialogs/select_file_dialog.h"
#include "ui/shell_dialogs/select_file_policy.h"

namespace ui {

SelectFileDialog* CreateSelectFileDialog(
    SelectFileDialog::Listener* listener,
    std::unique_ptr<SelectFilePolicy> policy) {
  NOTIMPLEMENTED();
  return nullptr;
}

}  // namespace ui
