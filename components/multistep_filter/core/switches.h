// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Multistep filter command-line switches
// summary: Defines command-line switch names that allow HTTP URLs and bypass capability checks for multistep filter testing.
// ---

#ifndef COMPONENTS_MULTISTEP_FILTER_CORE_SWITCHES_H_
#define COMPONENTS_MULTISTEP_FILTER_CORE_SWITCHES_H_

namespace multistep_filter::switches {

// Allows HTTP URLs for extraction and suggestions during browser testing.
inline constexpr char kMultistepFilterAllowHttpForTesting[] =
    "multistep-filter-allow-http-for-testing";

// Bypass the capability checks for local testing.
inline constexpr char kMultistepFilterBypassCapabilityCheck[] =
    "multistep-filter-bypass-capability-check";

}  // namespace multistep_filter::switches

#endif  // COMPONENTS_MULTISTEP_FILTER_CORE_SWITCHES_H_
