// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Module with dependency test fixture for code cache generation
// summary: ES module that imports an add function from a sibling math module, used as a dependency fixture in the generate_code_cache tests.
// ---

import {add} from './math.js';
export function calculate(a, b) {
  return add(a, b);
}
