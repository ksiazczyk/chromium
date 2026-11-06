// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Drag utilities implementation for widget scale factor
// summary: Implements ScaleFactorForDragFromWidget, returning the device scale factor for the display of a widget's native view.
// ---

#include "ui/views/drag_utils.h"

#include "ui/base/layout.h"
#include "ui/views/widget/widget.h"

namespace views {

float ScaleFactorForDragFromWidget(const Widget* widget) {
  float device_scale = 1.0f;
  if (widget && widget->GetNativeView()) {
    gfx::NativeView view = widget->GetNativeView();
    device_scale = ui::GetScaleFactorForNativeView(view);
  }
  return device_scale;
}

}  // namespace views
