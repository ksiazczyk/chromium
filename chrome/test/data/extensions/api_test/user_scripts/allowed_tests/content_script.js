// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension content script fixture
// summary: Content script registered by the test extension that appends a marker div to the page to verify content script injection.
// ---

const div = document.createElement('div');
div.id = 'content-script';
document.body.appendChild(div);
