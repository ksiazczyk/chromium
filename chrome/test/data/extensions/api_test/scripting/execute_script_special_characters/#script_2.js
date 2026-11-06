// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Test fixture script #script_2.js'
// summary: Fixture that appends a div with id hashtag_script_2, existing under the unescaped name so the escaped %23script_2.js path fails to load.
// ---

const div = document.createElement('div');
div.id = 'hashtag_script_2';
document.body.appendChild(div);
