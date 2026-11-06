// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: User script fixture injecting injected_user_script div
// summary: Injects a div with id injected_user_script when run, used as a registered user script to verify injection across browser sessions.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_user_script';
document.body.appendChild(div);
