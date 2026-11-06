// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: User script injecting test marker element
// summary: User script registered by the tests that injects a div with id injected_user_script to verify injection before and after unregistration.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_user_script';
document.body.appendChild(div);
