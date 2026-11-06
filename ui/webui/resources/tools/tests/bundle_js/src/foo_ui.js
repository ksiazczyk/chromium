// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo_ui.js test fixture
// summary: Test fixture importing subdir/baz.js and foo.js to exercise relative import bundling.
// ---

import './subdir/baz.js';
import './foo.js';
