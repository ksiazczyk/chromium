// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Delegated ink point Mojom traits implementation
// summary: Implements the mojo StructTraits Read function that deserializes a DelegatedInkPoint data view into a gfx::DelegatedInkPoint.
// ---

#include "ui/gfx/mojom/delegated_ink_point_mojom_traits.h"

namespace mojo {

// static
bool StructTraits<
    gfx::mojom::DelegatedInkPointDataView,
    gfx::DelegatedInkPoint>::Read(gfx::mojom::DelegatedInkPointDataView data,
                                  gfx::DelegatedInkPoint* out) {
  out->pointer_id_ = data.pointer_id();
  return data.ReadPoint(&out->point_) && data.ReadTimestamp(&out->timestamp_);
}

}  // namespace mojo
