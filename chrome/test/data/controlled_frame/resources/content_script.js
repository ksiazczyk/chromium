// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script test resource
// summary: Test content script that sets the page background to red on DOMContentLoaded, used as a resource in Controlled Frame tests.
// ---

document.addEventListener('DOMContentLoaded', () => {
  document.body.style.backgroundColor = 'red';
});
