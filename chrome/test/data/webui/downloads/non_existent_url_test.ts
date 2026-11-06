// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Downloads page load test for non-existent URL
// summary: TypeScript test that checks the downloads page loads at its expected address without console errors.
// ---

import {assertEquals} from 'chrome://webui-test/chai_assert.js';

suite('NonExistentUrl', function() {
  test('should load main page with no console errors', async function() {
    await customElements.whenDefined('downloads-manager');
    assertEquals('chrome://downloads/', location.href);
  });
});
