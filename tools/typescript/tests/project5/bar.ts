// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: bar module
// summary: TypeScript module exporting foo() that returns 'foo', part of the project5 test project under tools/typescript/tests.
// ---

export function foo(): string {
  return 'foo';
}
