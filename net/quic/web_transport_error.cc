// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebTransport error formatting
// summary: Implements string conversion and stream output for WebTransportError, combining net error, QUIC error, and detail messages.
// ---

#include "net/quic/web_transport_error.h"

#include "base/strings/strcat.h"

namespace net {

std::string WebTransportErrorToString(const WebTransportError& error) {
  std::string message =
      ExtendedErrorToString(error.net_error, error.quic_error);
  if (error.details == message)
    return message;
  return base::StrCat({message, " (", error.details, ")"});
}

std::ostream& operator<<(std::ostream& os, const WebTransportError& error) {
  os << WebTransportErrorToString(error);
  return os;
}

}  // namespace net
