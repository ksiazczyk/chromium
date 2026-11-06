// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension user script fixture
// summary: User script registered by the test extension that appends a marker div to the page and is written to tolerate repeated injection.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'user-script-file';
document.body.appendChild(div);
