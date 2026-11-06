// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fuchsia select file dialog stub
// summary: Provides a Fuchsia placeholder for CreateSelectFileDialog that hits NOTREACHED because no file dialog backend exists there.
// ---

#include "ui/shell_dialogs/select_file_dialog.h"

#include "base/notreached.h"
#include "ui/shell_dialogs/select_file_policy.h"

namespace ui {

SelectFileDialog* CreateSelectFileDialog(
    SelectFileDialog::Listener* listener,
    std::unique_ptr<SelectFilePolicy> policy) {
  NOTREACHED();
}

}  // namespace ui
