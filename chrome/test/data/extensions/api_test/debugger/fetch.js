// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fetch trigger script for invalid_char page
// summary: Page script that fetches invalid_char.html on load and logs any error, serving as a fetch scenario in the debugger API tests.
// ---

window.addEventListener('load', () => {
  fetch('/invalid_char.html').catch(err => {
    console.error(`fetch('/invalid_char.html') failed with error: ${err}`);
  });
});
