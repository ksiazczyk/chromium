// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Second user script fixture injecting injected_user_script_2 div
// summary: Injects a div with id injected_user_script_2 when run, used as a second registered user script in the persistence test.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_user_script_2';
document.body.appendChild(div);
