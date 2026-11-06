// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Second user script injecting test marker element
// summary: Second user script registered by the tests that injects a div with id injected_user_script_2 to verify selective unregistration by id.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_user_script_2';
document.body.appendChild(div);
