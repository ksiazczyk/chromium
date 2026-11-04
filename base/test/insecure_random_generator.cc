// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Insecure random generator implementation
// summary: Defines the constructor and destructor of the test-instantiable insecure random generator.
// ---

#include "base/test/insecure_random_generator.h"

namespace base::test {

InsecureRandomGenerator::InsecureRandomGenerator() = default;
InsecureRandomGenerator::~InsecureRandomGenerator() = default;

}  // namespace base::test
