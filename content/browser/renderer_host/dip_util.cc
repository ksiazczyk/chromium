// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Device scale factor utility for render widget host views
// summary: Provides GetScaleFactorForView, returning a view's device scale factor or the default screen's scale factor when no view is given.
// ---

#include "content/browser/renderer_host/dip_util.h"

#include "content/public/browser/render_widget_host_view.h"
#include "ui/display/display_util.h"
#include "ui/display/screen_info.h"

namespace content {

float GetScaleFactorForView(RenderWidgetHostView* view) {
  if (view)
    return view->GetDeviceScaleFactor();
  display::ScreenInfo screen_info;
  display::DisplayUtil::GetDefaultScreenInfo(&screen_info);
  return screen_info.device_scale_factor;
}

}  // namespace content
