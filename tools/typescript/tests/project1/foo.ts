// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TypeScript test fixture foo
// summary: Test fixture exporting simple foo and num functions for the TypeScript tooling test project.
// ---

export function foo(): string {
  return 'foo';
}

export function num(): number {
  return 17;
}
