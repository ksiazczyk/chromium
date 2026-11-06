// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: include.ts test fixture
// summary: Test fixture exporting a hello function that returns the string 'hello', used by the sibling exclude fixture in the TypeScript project tests.
// ---

export function hello(): string {
  return 'hello';
}

