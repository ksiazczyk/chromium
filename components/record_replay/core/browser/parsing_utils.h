// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JSON parsing utility declarations
// summary: Declares ParseJSONListOfDicts, a helper that parses a JSON string expected to contain a list of dictionaries.
// ---

#ifndef COMPONENTS_RECORD_REPLAY_CORE_BROWSER_PARSING_UTILS_H_
#define COMPONENTS_RECORD_REPLAY_CORE_BROWSER_PARSING_UTILS_H_

#include <string_view>
#include <vector>

#include "base/values.h"

namespace record_replay {

// Parses a JSON string expecting a list of dictionaries.
// Returns a vector of dictionaries on success, or an empty vector on failure.
std::vector<base::Value> ParseJSONListOfDicts(std::string_view json_string);

}  // namespace record_replay

#endif  // COMPONENTS_RECORD_REPLAY_CORE_BROWSER_PARSING_UTILS_H_
