// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Second user script test helper injecting a div element
// summary: Test helper script that injects a div with id injected_user_script_2 into the page, designed to be injected multiple times using var declarations.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_user_script_2';
document.body.appendChild(div);
