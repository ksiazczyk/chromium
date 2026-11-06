// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Test fixture script #script.js'
// summary: 'Fixture executed via chrome.scripting.executeScript that appends a div with id hashtag_script to check that a # in the file name is handled literally.'
// ---

const div = document.createElement('div');
div.id = 'hashtag_script';
document.body.appendChild(div);
