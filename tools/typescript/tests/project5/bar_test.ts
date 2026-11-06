// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: bar_test
// summary: Test helper verifying that foo() imported from bar.ts returns 'foo' in the project5 TypeScript test project.
// ---

import {foo} from './bar.js';

export function testFoo(): boolean {
  return foo() === 'foo';
}
