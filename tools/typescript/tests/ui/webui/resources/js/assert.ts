// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Assert helper for TypeScript tests
// summary: Exports an assert function that returns for truthy values and throws an 'Assertion failed' error otherwise, supporting test code.
// ---

export function assert<T>(value: T): asserts value {
  if (value) {
    return;
  }

  throw new Error('Assertion failed');
}
