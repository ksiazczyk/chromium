// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script adding an incognito-disallowed marker element
// summary: Content script registered by the test that appends a div with id incognito-disallowed to the page body to signal that it ran.
// ---

const div = document.createElement('div');
div.id = 'incognito-disallowed';
document.body.appendChild(div);
