// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FuzzTest initialization helper implementation
// summary: Defines the fuzztest_init_helper initialization function pointer used to set up FuzzTests in Chromium test suites.
// ---

#include "testing/libfuzzer/fuzztest_init_helper.h"

void (*fuzztest_init_helper::initialization_function)(int argc,
                                                      char const* const* argv);
