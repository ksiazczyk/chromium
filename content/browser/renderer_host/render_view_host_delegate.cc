// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RenderViewHostDelegate default implementations
// summary: Implements default behavior for RenderViewHostDelegate methods such as GetDelegateView, IsNeverComposited, IsGuest, and base background color.
// ---

#include "content/browser/renderer_host/render_view_host_delegate.h"

namespace content {

RenderViewHostDelegateView* RenderViewHostDelegate::GetDelegateView() {
  return nullptr;
}

bool RenderViewHostDelegate::IsNeverComposited() {
  return false;
}

bool RenderViewHostDelegate::IsGuest() {
  return false;
}

std::optional<SkColor> RenderViewHostDelegate::GetBaseBackgroundColor() {
  return std::nullopt;
}

}  // namespace content
