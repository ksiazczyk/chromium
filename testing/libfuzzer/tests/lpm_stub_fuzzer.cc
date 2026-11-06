// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: LPM stub fuzzer
// summary: Stub fuzzer using libprotobuf-mutator with a generated test proto message as input.
// ---

#include "testing/libfuzzer/tests/lpm_test_fuzzable.pb.h"
#include "third_party/libprotobuf-mutator/src/src/libfuzzer/libfuzzer_macro.h"

DEFINE_PROTO_FUZZER(const fuzzable::lpm_test::TestMessage& input) {}
