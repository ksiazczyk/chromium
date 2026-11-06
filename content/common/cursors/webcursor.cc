// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebCursor base implementation
// summary: Implements the WebCursor constructors and destructor, wrapping a ui::Cursor for the content layer.
// ---

#include "content/common/cursors/webcursor.h"

#include "ui/base/cursor/mojom/cursor_type.mojom-shared.h"

namespace content {

WebCursor::WebCursor() = default;

WebCursor::~WebCursor() = default;

WebCursor::WebCursor(const ui::Cursor& cursor) : cursor_(cursor) {}

}  // namespace content
