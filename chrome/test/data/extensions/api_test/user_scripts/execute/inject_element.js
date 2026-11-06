// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Inject element test script
// summary: Test fixture script that appends a div with id injected_file_1 to the page body and is written to be safely injected multiple times.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_file_1';
document.body.appendChild(div);
