// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Rules registry ID constants
// summary: Defines constants for the default and invalid rules registry IDs used by extension rules registries.
// ---

#ifndef EXTENSIONS_BROWSER_RULES_REGISTRY_IDS_H_
#define EXTENSIONS_BROWSER_RULES_REGISTRY_IDS_H_

namespace extensions::rules_registry_ids {

inline constexpr int kDefaultRulesRegistryID = 0;
inline constexpr int kInvalidRulesRegistryID = -1;

}  // namespace extensions::rules_registry_ids

#endif  // EXTENSIONS_BROWSER_RULES_REGISTRY_IDS_H_
