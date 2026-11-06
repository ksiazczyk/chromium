// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Legacy JavaScript test fixture
// summary: JavaScript fixture exporting a bar function within the TypeScript test project.
// ---

/** @return {string} */
export function bar() {
  return 'bar';
}
