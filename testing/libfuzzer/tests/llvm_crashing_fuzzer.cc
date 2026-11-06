// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: LLVM crashing fuzzer
// summary: Fuzzer that deliberately triggers a null pointer read to test crash handling across sanitizer configurations.
// ---

#include <stddef.h>
#include <stdint.h>

#include "base/compiler_specific.h"

// Triggers a memory fault / crash across all configurations (ASan, UBSan,
// etc.). Uses a volatile pointer so the compiler cannot optimize away the
// memory read.
NOINLINE int TriggerCrash() {
  volatile int* p = nullptr;
  return *p;
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  return TriggerCrash();
}
