// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension usage action enum
// summary: Defines the ExtensionUsageAction enum used in UKM by the Chrome Web Store team to monitor extension usage actions like pinning and toggling.
// ---

#ifndef EXTENSIONS_COMMON_EXTENSION_USAGE_H_
#define EXTENSIONS_COMMON_EXTENSION_USAGE_H_

namespace extensions {

// Actions tracked by Chrome Web Store team for monitoring extension usage.
// Do not re-order entries, as these are used in UKM. Exposed for testing
// purposes.
// LINT.IfChange(ExtensionUsageAction)
enum class ExtensionUsageAction {
  kPinned,
  kUnpinned,
  kContextMenuInit,
  kActionClicked,
  kEnabled,
  kDisabled,
};
// LINT.ThenChange(//tools/metrics/histograms/metadata/extensions/enums.xml:ExtensionUsageAction,//extensions/common/api/metrics_private.json)

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_EXTENSION_USAGE_H_
