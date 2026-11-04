// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: System Internals entry point
// summary: Entry point that loads the test module when requested and otherwise initializes the System Internals page.
// ---

import {initialize} from './index.js';
import {loadTestModule} from './test_loader_util.js';

document.addEventListener('DOMContentLoaded', async () => {
  // Using a query of "module" provides a hook for the test suite to perform
  // setup actions.
  const loaded = await loadTestModule();
  if (!loaded) {
    initialize();
  }
});
