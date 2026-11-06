// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TypeScript fixture with require-await violation
// summary: TypeScript fixture containing an async function without await to trigger the @typescript-eslint/require-await rule in tests.
// ---

const foo: number = 3;
const bar: number = foo;

// Violating @typescript-eslint/require-await.
async function foo() {
  return foo + bar;
}
