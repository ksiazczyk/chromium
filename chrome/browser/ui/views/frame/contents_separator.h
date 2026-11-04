// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Contents separator view header
// summary: Declares ContentsSeparator, a view that paints a solid full-bounds background used by BrowserView instead of views::Separator, with layer-based and plain factory methods.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_FRAME_CONTENTS_SEPARATOR_H_
#define CHROME_BROWSER_UI_VIEWS_FRAME_CONTENTS_SEPARATOR_H_

#include <memory>

#include "ui/views/view.h"

// BrowserView uses a solid background instead of a views::Separator. The latter
// is not guaranteed to fill its bounds and assumes being painted on an opaque
// background (which is why it'd be OK to only partially fill its bounds). This
// needs to fill its bounds to have the entire BrowserView painted.
class ContentsSeparator : public views::View {
  METADATA_HEADER(ContentsSeparator, views::View)

 public:
  static std::unique_ptr<ContentsSeparator> CreateLayerBasedContentsSeparator();
  static std::unique_ptr<ContentsSeparator> CreateContentsSeparator();

 private:
  explicit ContentsSeparator(bool create_layer);
};

#endif  // CHROME_BROWSER_UI_VIEWS_FRAME_CONTENTS_SEPARATOR_H_
