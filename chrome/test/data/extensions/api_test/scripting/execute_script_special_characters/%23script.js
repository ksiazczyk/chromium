// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test fixture script %23script.js
// summary: Fixture with a URL-escaped file name that appends a div with id hashtag_script_escaped to verify escaped names are not decoded when loading scripts.
// ---

const div = document.createElement('div');
div.id = 'hashtag_script_escaped';
document.body.appendChild(div);
