// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Modal dialog host UI property definition
// summary: Defines the UI class property key that stores a ModalDialogHost pointer for use by constrained window code.
// ---

#include "components/constrained_window/modal_dialog_host_property.h"

#include "components/web_modal/modal_dialog_host.h"

DEFINE_UI_CLASS_PROPERTY_TYPE(web_modal::ModalDialogHost*)

namespace constrained_window {

DEFINE_UI_CLASS_PROPERTY_KEY(web_modal::ModalDialogHost*,
                             kModalDialogHostKey,
                             nullptr)

}  // namespace constrained_window
