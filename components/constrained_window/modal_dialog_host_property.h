// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ModalDialogHost property key declaration
// summary: Declares a UI class property key that stores the ModalDialogHost pointer associated with a window in the constrained_window namespace.
// ---

#ifndef COMPONENTS_CONSTRAINED_WINDOW_MODAL_DIALOG_HOST_PROPERTY_H_
#define COMPONENTS_CONSTRAINED_WINDOW_MODAL_DIALOG_HOST_PROPERTY_H_

#include "ui/base/class_property.h"

namespace web_modal {
class ModalDialogHost;
}

DECLARE_UI_CLASS_PROPERTY_TYPE(web_modal::ModalDialogHost*)

namespace constrained_window {

// A property key to store a pointer to the ModalDialogHost associated with a
// window.
extern const ui::ClassProperty<web_modal::ModalDialogHost*>* const
    kModalDialogHostKey;

}  // namespace constrained_window

#endif  // COMPONENTS_CONSTRAINED_WINDOW_MODAL_DIALOG_HOST_PROPERTY_H_
