// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: QUIC socket config step string conversion
// summary: Implements QuicSocketConfigStepToString, mapping QUIC socket configuration step enum values to readable strings for logging.
// ---

#include "net/quic/quic_socket_config_step.h"

#include <string_view>

namespace net {

std::string_view QuicSocketConfigStepToString(QuicSocketConfigStep step) {
  switch (step) {
    case QuicSocketConfigStep::kConnect:
      return "Connect";
    case QuicSocketConfigStep::kSetReceiveBufferSize:
      return "SetReceiveBufferSize";
    case QuicSocketConfigStep::kSetDoNotFragment:
      return "SetDoNotFragment";
    case QuicSocketConfigStep::kSetReceiveEcn:
      return "SetReceiveEcn";
    case QuicSocketConfigStep::kSetSendBufferSize:
      return "SetSendBufferSize";
  }
}

}  // namespace net
