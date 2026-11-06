// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Deserialization of url::Origin from Mojom
// summary: Implements reading url::Origin from Mojom data, creating tuple or opaque origins from scheme, host, port and nonce.
// ---

#include "url/mojom/origin_mojom_traits.h"

#include <string_view>

namespace mojo {

// static
bool StructTraits<url::mojom::OriginDataView, url::Origin>::Read(
    url::mojom::OriginDataView data,
    url::Origin* out) {
  std::string_view scheme, host;
  std::optional<base::UnguessableToken> nonce_if_opaque;
  if (!data.ReadScheme(&scheme) || !data.ReadHost(&host) ||
      !data.ReadNonceIfOpaque(&nonce_if_opaque))
    return false;

  std::optional<url::Origin> creation_result =
      nonce_if_opaque
          ? url::Origin::UnsafelyCreateOpaqueOriginWithoutNormalization(
                scheme, host, data.port(), url::Origin::Nonce(*nonce_if_opaque))
          : url::Origin::UnsafelyCreateTupleOriginWithoutNormalization(
                scheme, host, data.port());
  if (!creation_result)
    return false;

  *out = std::move(creation_result.value());
  return true;
}

}  // namespace mojo
