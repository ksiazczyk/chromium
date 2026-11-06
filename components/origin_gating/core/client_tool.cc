// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Client tool debug serialization implementation
// summary: Implements ClientTool::ToDebugValue, which serializes the tool's domain and identifier into a base::Value string for debugging purposes.
// ---

#include "components/origin_gating/core/client_tool.h"

#include "base/strings/stringprintf.h"
#include "base/values.h"

namespace origin_gating {

base::Value ClientTool::ToDebugValue() const {
  return base::Value(base::StringPrintf(
      "domain: %p, tool: %d", static_cast<const void*>(&domain_.get()), tool_));
}

}  // namespace origin_gating
