// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fourth injected user script fixture
// summary: Test user script that appends a div with id injected_user_script_4, used as an updated script in userScripts.update test cases.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_user_script_4';
document.body.appendChild(div);
