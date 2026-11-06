// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mac widget size utility header
// summary: Declares GetWindowSizeForClientSize, which converts a client size to the corresponding full window size on macOS.
// ---

#ifndef UI_VIEWS_WIDGET_WIDGET_UTILS_MAC_H_
#define UI_VIEWS_WIDGET_WIDGET_UTILS_MAC_H_

#include "ui/views/views_export.h"
#include "ui/views/widget/widget.h"

namespace views {

gfx::Size GetWindowSizeForClientSize(Widget* widget, const gfx::Size& size);

}  // namespace views

#endif  // UI_VIEWS_WIDGET_WIDGET_UTILS_MAC_H_
