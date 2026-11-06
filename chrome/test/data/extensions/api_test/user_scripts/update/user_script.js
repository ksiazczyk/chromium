// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected user script fixture
// summary: Test user script that appends a div with id injected_user_script to the page, used to verify script registration and updates.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_user_script';
document.body.appendChild(div);
