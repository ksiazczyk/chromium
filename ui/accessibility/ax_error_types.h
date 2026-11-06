// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AX serialization error flags
// summary: Defines flags describing the ways an accessibility tree serialization can fail, such as reaching the node limit or a timeout.
// ---

#ifndef UI_ACCESSIBILITY_AX_ERROR_TYPES_H_
#define UI_ACCESSIBILITY_AX_ERROR_TYPES_H_

namespace ui {

// Flags for the possible ways an AXTree serialization could fail.
enum AXSerializationErrorFlag {
  kNoErrors = 0,
  kMaxNodesReached,
  kTimeoutReached,
};

}  // namespace ui

#endif  // UI_ACCESSIBILITY_AX_ERROR_TYPES_H_
