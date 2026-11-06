// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Begin frame source extension implementation
// summary: Implements the property key, setter and getter that attach a BeginFrameSourceExtension to a PlatformWindow.
// ---

#include "ui/platform_window/extensions/begin_frame_source_extension.h"

#include "ui/base/class_property.h"
#include "ui/platform_window/platform_window.h"

DEFINE_UI_CLASS_PROPERTY_TYPE(ui::BeginFrameSourceExtension*)

namespace ui {

DEFINE_UI_CLASS_PROPERTY_KEY(BeginFrameSourceExtension*,
                             kBeginFrameSourceExtensionKey,
                             nullptr)

BeginFrameSourceExtension::~BeginFrameSourceExtension() = default;

void BeginFrameSourceExtension::SetBeginFrameSourceExtension(
    PlatformWindow* window,
    BeginFrameSourceExtension* source) {
  // A window has at most one begin frame source; a second registration would
  // silently orphan the first.
  DCHECK(!source || !window->GetProperty(kBeginFrameSourceExtensionKey));
  window->SetProperty(kBeginFrameSourceExtensionKey, source);
}

BeginFrameSourceExtension* GetBeginFrameSourceExtension(
    const PlatformWindow& window) {
  return window.GetProperty(kBeginFrameSourceExtensionKey);
}

}  // namespace ui
