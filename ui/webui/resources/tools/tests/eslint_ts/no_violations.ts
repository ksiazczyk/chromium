// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Clean TypeScript fixture without lint violations
// summary: TypeScript fixture with simple valid code used as a negative test case that should trigger no ESLint violations.
// ---

const foo: number = 3;
const bar: number = foo;

function foo() {
  return foo + bar;
}
