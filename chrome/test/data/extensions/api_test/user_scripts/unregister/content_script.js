// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script injecting test marker element
// summary: Injects a div with id injected_content_script into the page so tests can verify content script injection while exercising user script unregistration.
// ---

// This script can be injected multiple times, so we use `var` instead of
// `const`.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_content_script';
document.body.appendChild(div);
