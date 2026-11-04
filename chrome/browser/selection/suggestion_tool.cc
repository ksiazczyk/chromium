// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Suggestion tool default capabilities
// summary: Provides the default empty capabilities implementation for the SuggestionTool interface.
// ---

#include "chrome/browser/selection/suggestion_tool.h"

#include <string>
#include <vector>

namespace selection {

std::vector<std::string> SuggestionTool::GetCapabilities() const {
  return {};
}

}  // namespace selection
