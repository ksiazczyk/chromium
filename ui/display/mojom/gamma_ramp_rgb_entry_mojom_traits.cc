// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GammaRampRGBEntry mojom traits implementation
// summary: Implements the mojo StructTraits Read function that deserializes a GammaRampRGBEntryDataView into display::GammaRampRGBEntry.
// ---

#include "ui/display/mojom/gamma_ramp_rgb_entry_mojom_traits.h"

namespace mojo {

// static
bool StructTraits<display::mojom::GammaRampRGBEntryDataView,
                  display::GammaRampRGBEntry>::
    Read(display::mojom::GammaRampRGBEntryDataView data,
         display::GammaRampRGBEntry* out) {
  out->r = data.r();
  out->g = data.g();
  out->b = data.b();
  return true;
}

}  // namespace mojo
