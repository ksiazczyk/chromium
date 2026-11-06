// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Clipboard URL info struct
// summary: Defines a simple struct pairing a clipboard URL with its page title.
// ---

#ifndef UI_BASE_CLIPBOARD_CLIPBOARD_URL_INFO_H_
#define UI_BASE_CLIPBOARD_CLIPBOARD_URL_INFO_H_

#include "url/gurl.h"

namespace ui {

struct ClipboardUrlInfo {
  GURL url;
  std::u16string title;
};

}  // namespace ui

#endif  // UI_BASE_CLIPBOARD_CLIPBOARD_URL_INFO_H_
