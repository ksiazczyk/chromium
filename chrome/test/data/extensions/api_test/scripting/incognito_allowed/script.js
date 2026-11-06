// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script marking incognito allowed injection
// summary: Injected content script that appends a div with id incognito-allowed to the page body so the test can verify that the script ran.
// ---

const div = document.createElement('div');
div.id = 'incognito-allowed';
document.body.appendChild(div);
