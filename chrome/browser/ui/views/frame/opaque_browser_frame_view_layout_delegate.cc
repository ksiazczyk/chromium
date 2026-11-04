// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Opaque browser frame view layout delegate implementation
// summary: Implements the default frame button style of the opaque browser frame view layout delegate, returning image buttons.
// ---

#include "chrome/browser/ui/views/frame/opaque_browser_frame_view_layout_delegate.h"

OpaqueBrowserFrameViewLayoutDelegate::FrameButtonStyle
OpaqueBrowserFrameViewLayoutDelegate::GetFrameButtonStyle() const {
  return FrameButtonStyle::kImageButton;
}
