// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that sets the page title to injected
// summary: Content script injected into all frames that sets the document title to 'injected' on DOMContentLoaded so the test can verify injection.
// ---

document.addEventListener('DOMContentLoaded', function() {
  document.title = 'injected';
});
