// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HttpStream GetQuicConnectionDetails implementation
// summary: Implements the default HttpStream::GetQuicConnectionDetails method, which simply returns no QUIC connection details.
// ---

#include "net/http/http_stream.h"

namespace net {

std::optional<HttpStream::QuicConnectionDetails>
HttpStream::GetQuicConnectionDetails() const {
  return std::nullopt;
}

}  // namespace net
