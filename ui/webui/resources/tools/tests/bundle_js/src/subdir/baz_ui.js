// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: baz_ui.js bundle test fixture
// summary: Test fixture module that imports foo.js and baz.js via relative paths to exercise import resolution in the JS bundling tests.
// ---

import '../foo.js';
import './baz.js';
