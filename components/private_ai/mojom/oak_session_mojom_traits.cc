// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OakSession Mojom StructTraits implementation
// summary: Implements the mojo StructTraits Read function that deserializes a HandshakeMessage from its Mojom wire representation into the native C++ type.
// ---

#include "components/private_ai/mojom/oak_session_mojom_traits.h"

namespace mojo {

// static
bool StructTraits<private_ai::mojom::HandshakeMessageDataView,
                  private_ai::HandshakeMessage>::
    Read(private_ai::mojom::HandshakeMessageDataView data,
         private_ai::HandshakeMessage* out) {
  return data.ReadEphemeralPublicKey(&out->ephemeral_public_key) &&
         data.ReadCiphertext(&out->ciphertext);
}

}  // namespace mojo
