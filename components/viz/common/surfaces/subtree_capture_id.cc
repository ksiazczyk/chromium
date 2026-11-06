// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SubtreeCaptureId string conversion implementation
// summary: Implements ToString for SubtreeCaptureId, formatting the subtree capture identifier for logging and debugging.
// ---

#include "components/viz/common/surfaces/subtree_capture_id.h"

#include "base/strings/stringprintf.h"

namespace viz {

std::string SubtreeCaptureId::ToString() const {
  return base::StringPrintf("SubtreeCaptureId(%s)",
                            subtree_id_.ToString().c_str());
}

}  // namespace viz
