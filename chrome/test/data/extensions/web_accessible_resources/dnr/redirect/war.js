// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Web-accessible resource script for redirect test
// summary: Web-accessible script that signals a successful DNR redirect by setting the page body text to 'dnr redirect success' on load.
// ---

document.addEventListener('DOMContentLoaded', (event) => {
  document.body.textContent = 'dnr redirect success';
});
