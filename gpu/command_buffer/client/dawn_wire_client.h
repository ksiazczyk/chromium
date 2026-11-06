// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DawnWireClient wrapper declaration
// summary: Declares a Dawn wire client wrapper exposing a uint8_t span HandleCommands overload while hiding the base class span-based API from Chromium code.
// ---

#ifndef GPU_COMMAND_BUFFER_CLIENT_DAWN_WIRE_CLIENT_H_
#define GPU_COMMAND_BUFFER_CLIENT_DAWN_WIRE_CLIENT_H_

#include <dawn/wire/WireClient.h>

#include <cstdint>

#include "base/containers/span.h"

namespace gpu::webgpu {

class DawnWireClient : public dawn::wire::WireClient {
 public:
  using dawn::wire::WireClient::WireClient;
  bool HandleCommands(base::span<const volatile uint8_t> commands);

 private:
  // Hide the std::span versions of the API from the base class to prevent it
  // from being used directly in Chromium.
  using dawn::wire::WireClient::HandleCommands;
};

}  // namespace gpu::webgpu

#endif  // GPU_COMMAND_BUFFER_CLIENT_DAWN_WIRE_CLIENT_H_
