// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Entry script running the extension's Wasm tests
// summary: Module entry point that imports runTests from test_module.js and starts the Wasm tests.
// ---

import {runTests} from './test_module.js';

runTests();
