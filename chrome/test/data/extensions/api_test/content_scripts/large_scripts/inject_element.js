// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script injecting an element
// summary: Test content script that appends a div with id 'injected' to the document body when run.
// ---

const div = document.createElement('div');
div.id = 'injected';
document.body.appendChild(div);
