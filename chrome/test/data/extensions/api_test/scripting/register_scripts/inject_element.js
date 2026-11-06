// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Element injection test content script
// summary: Content script fixture that appends a div with id 'injected' to the document body.
// ---

const div = document.createElement('div');
div.id = 'injected';
document.body.appendChild(div);
