// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Caption Button Placeholder Container for PWA Window Controls Overlay
// summary: Declares a non-interactive placeholder view that marks control button space as non-client area for PWAs using the window controls overlay display override.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_FRAME_CAPTION_BUTTON_PLACEHOLDER_CONTAINER_H_
#define CHROME_BROWSER_UI_VIEWS_FRAME_CAPTION_BUTTON_PLACEHOLDER_CONTAINER_H_

#include "ui/base/metadata/metadata_header_macros.h"
#include "ui/views/view.h"

// A placeholder container for control buttons for PWAs with window controls
// overlay display override. Does not interact with the buttons. It is just
// used to indicate that this is non-client-area.
class CaptionButtonPlaceholderContainer : public views::View {
  METADATA_HEADER(CaptionButtonPlaceholderContainer, views::View)

 public:
  CaptionButtonPlaceholderContainer();
  CaptionButtonPlaceholderContainer(const CaptionButtonPlaceholderContainer&) =
      delete;
  CaptionButtonPlaceholderContainer& operator=(
      const CaptionButtonPlaceholderContainer&) = delete;
  ~CaptionButtonPlaceholderContainer() override;
};

#endif  // CHROME_BROWSER_UI_VIEWS_FRAME_CAPTION_BUTTON_PLACEHOLDER_CONTAINER_H_
