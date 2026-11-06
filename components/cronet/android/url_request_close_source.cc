// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Connection close source conversion
// summary: Maps QUIC connection close sources from the network stack to the Java ConnectionCloseSource enum values.
// ---

#include "components/cronet/android/url_request_close_source.h"

#include "net/third_party/quiche/src/quiche/quic/core/quic_types.h"

namespace cronet {

ConnectionCloseSource NetSourceToJavaSource(
    quic::ConnectionCloseSource source) {
  switch (source) {
    case quic::ConnectionCloseSource::FROM_SELF:
      return ConnectionCloseSource::SELF;
    case quic::ConnectionCloseSource::FROM_PEER:
      return ConnectionCloseSource::PEER;
    default:
      return ConnectionCloseSource::UNKNOWN;
  }
}

}  // namespace cronet
