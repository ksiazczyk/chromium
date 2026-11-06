// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Form submit on load helper a.js
// summary: Submits the form on a.html when the page loads, triggering the navigation events under test.
// ---

onload = function() {
  form.submit();
};
