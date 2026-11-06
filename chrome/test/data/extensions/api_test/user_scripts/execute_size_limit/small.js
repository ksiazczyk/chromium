// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: small.js undersized user script test fixture
// summary: Small user script fixture that stays under the size limit and is injected successfully during the test.
// ---

const div = document.createElement('div');
div.id = 'small';
document.body.appendChild(div);
