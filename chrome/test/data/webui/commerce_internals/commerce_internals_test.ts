// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TypeScript test for the commerce internals page title
// summary: TypeScript Mocha test asserting that the commerce internals page title equals 'commerce internals'.
// ---

import {assertEquals} from 'chrome://webui-test/chai_assert.js';

suite('CommerceInternalsTest', () => {
  test('page title', () => {
    assertEquals('commerce internals', document.title.toLocaleLowerCase());
  });
});
