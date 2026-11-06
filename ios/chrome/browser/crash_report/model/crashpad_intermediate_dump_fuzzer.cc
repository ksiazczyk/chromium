// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Crashpad intermediate dump reader fuzzer
// summary: Fuzzes the Crashpad iOS intermediate dump reader by initializing it with arbitrary byte input.
// ---

#include "third_party/crashpad/crashpad/util/ios/ios_intermediate_dump_reader.h"

extern "C" int LLVMFuzzerTestOneInput(const char* data, size_t size) {
  crashpad::internal::IOSIntermediateDumpByteArray dump_interface(data, size);
  crashpad::internal::IOSIntermediateDumpReader reader;
  reader.Initialize(dump_interface);
  return 0;
}
