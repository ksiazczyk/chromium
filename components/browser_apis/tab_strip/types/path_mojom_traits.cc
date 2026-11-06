// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Path Mojo traits implementation
// summary: Implements deserialization of Mojo Path data into the native tabs_api::Path type.
// ---

#include "components/browser_apis/tab_strip/types/path_mojom_traits.h"

bool mojo::StructTraits<MojoPathDataView, NativePath>::Read(
    MojoPathDataView view,
    NativePath* out) {
  std::vector<tabs_api::NodeId> components;
  if (!view.ReadComponents(&components)) {
    return false;
  }
  *out = tabs_api::Path(std::move(components));
  return true;
}
