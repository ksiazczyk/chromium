// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedDispatchToRendererCallback implementation
// summary: Implements the scoped wrapper that checks the event dispatch callback has been run or moved before destruction.
// ---

#include "components/input/dispatch_to_renderer_callback.h"

namespace input {

ScopedDispatchToRendererCallback::ScopedDispatchToRendererCallback(
    DispatchToRendererCallback dispatch_callback)
    : callback(std::move(dispatch_callback)) {}

ScopedDispatchToRendererCallback::~ScopedDispatchToRendererCallback() {
  CHECK(!callback);
}

}  // namespace input
