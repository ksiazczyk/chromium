// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Simulate click helper script
// summary: Test helper that clicks the link on the simulate_click page on window load, triggering a navigation with a Referrer header.
// ---

window.onload = function() {
  document.getElementById('link').click();
};
