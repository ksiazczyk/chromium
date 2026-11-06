// ---docerion
// type: test
// title: Expected bundle output bar_ui.rollup.js
// summary: Expected output of the bundle_js test for the bar UI entry point, containing the bundled alert from src/bar.js plus an import of the shared bundle.
// ---

import './shared.rollup.js';

// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

alert('Hello from src/bar.js');
//# sourceMappingURL=bar_ui.rollup.js.map
