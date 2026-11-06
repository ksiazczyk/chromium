// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Web MIDI data validator fuzzer
// summary: libFuzzer harness that runs arbitrary byte input through the Web MIDI data validity check.
// ---

#include <stddef.h>
#include <stdint.h>

#include "base/compiler_specific.h"
#include "media/midi/message_util.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  std::vector<uint8_t> buffer(data, UNSAFE_TODO(data + size));

  if (midi::IsValidWebMIDIData(buffer))
    return 0;

  return 0;
}
