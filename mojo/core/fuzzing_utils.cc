// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fuzzing support implementation
// summary: Implements the FakeChannelDelegate used by Mojo fuzzers, which no-ops channel message handling and reports the ipcz transport flag.
// ---

#include "mojo/core/fuzzing_utils.h"

namespace mojo::core {

bool FakeChannelDelegate::IsIpczTransport() const {
  return is_ipcz_transport_;
}

}  // namespace mojo::core
