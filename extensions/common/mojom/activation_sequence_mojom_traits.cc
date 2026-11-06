// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mojo traits for ActivationSequence
// summary: Implements the mojo StructTraits Read method that deserializes the Mojo ActivationSequence into the native extensions::ActivationSequence type.
// ---

#include "extensions/common/mojom/activation_sequence_mojom_traits.h"

namespace mojo {

bool StructTraits<extensions::mojom::ActivationSequenceDataView,
                  extensions::ActivationSequence>::
    Read(extensions::mojom::ActivationSequenceDataView data,
         extensions::ActivationSequence* out) {
  *out = extensions::ActivationSequence(data.value());
  return true;
}

}  // namespace mojo
