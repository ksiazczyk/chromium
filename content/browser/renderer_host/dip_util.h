// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Device scale factor utility for render widget host views
// summary: Declares GetScaleFactorForView, which returns the device scale factor for a render widget host view and offers a best guess when the view is null.
// ---

#ifndef CONTENT_BROWSER_RENDERER_HOST_DIP_UTIL_H_
#define CONTENT_BROWSER_RENDERER_HOST_DIP_UTIL_H_

#include "content/common/content_export.h"

namespace content {
class RenderWidgetHostView;

// This is the same as view->GetDeviceScaleFactor(), but will return a best
// guess when |view| is nullptr.
CONTENT_EXPORT float GetScaleFactorForView(RenderWidgetHostView* view);

}  // namespace content

#endif  // CONTENT_BROWSER_RENDERER_HOST_DIP_UTIL_H_
