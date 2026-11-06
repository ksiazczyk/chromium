// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Render widget host view input observer implementation
// summary: Provides the default destructor and empty view-destroyed callback for the render widget host view input observer interface.
// ---

#include "components/input/render_widget_host_view_input_observer.h"

namespace input {

RenderWidgetHostViewInputObserver::~RenderWidgetHostViewInputObserver() =
    default;

void RenderWidgetHostViewInputObserver::OnRenderWidgetHostViewInputDestroyed(
    RenderWidgetHostViewInput*) {}

}  // namespace input
