// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android WebCursor implementation
// summary: Provides the Android stub of WebCursor::GetNativeCursor, which returns an empty native cursor.
// ---

#include "content/common/cursors/webcursor.h"

namespace content {

gfx::NativeCursor WebCursor::GetNativeCursor() {
  return {};
}

}  // namespace content
