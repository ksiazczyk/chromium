// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GPU info entry builder header
// summary: Declares BuildGpuInfoEntry overloads that build description and value dictionaries used by internal browser diagnostic pages such as the GPU info page.
// ---

#ifndef UI_DISPLAY_UTIL_GPU_INFO_UTIL_H_
#define UI_DISPLAY_UTIL_GPU_INFO_UTIL_H_

#include <string_view>

#include "base/values.h"

namespace display {

// Helpers for internal pages like chrome://gpu.  Create a dictionary with two
// values named description (string) and value (depends on the helper).
base::Value BuildGpuInfoEntry(std::string_view description,
                              std::string_view value);
base::DictValue BuildGpuInfoEntry(std::string_view description,
                                  base::Value value);

}  // namespace display

#endif  // UI_DISPLAY_UTIL_GPU_INFO_UTIL_H_
