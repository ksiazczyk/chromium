// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script fixture for persistent user scripts test
// summary: Injects a div with id injected_content_script when run, serving as the content script registered through the scripting API in the persistence test.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_content_script';
document.body.appendChild(div);
