// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Basic module test fixture for code cache generation
// summary: Simple ES module exporting a message and a greet function, used as a basic fixture in the generate_code_cache tests.
// ---

export const message = 'Hello, world!';
export function greet() {
  return message;
}
