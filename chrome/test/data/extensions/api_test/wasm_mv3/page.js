// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Extension page entry script
// summary: Entry script for the extension page that imports and runs the WebAssembly test suite from test_module.js.
// ---

import {runTests} from './test_module.js';

runTests();
