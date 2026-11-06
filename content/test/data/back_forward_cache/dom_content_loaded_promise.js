// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: DOMContentLoaded promise helper script
// summary: Test helper that creates a promise resolving to 42 when the DOMContentLoaded event fires on the document.
// ---

// Set up a promise that will be resolve when DOMContentLoaded is fired.
var domContentLoaded = new Promise(resolve => {
  document.addEventListener("DOMContentLoaded", () => resolve(42));
});
