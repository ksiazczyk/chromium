// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default emoji panel helper implementation
// summary: Empty stub implementation reporting no emoji panel support for platforms without a dedicated implementation.
// ---

#include "ui/base/emoji/emoji_panel_helper.h"

namespace ui {

bool IsEmojiPanelSupported() {
  return false;
}

void ShowEmojiPanel() {}

}  // namespace ui
