// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Window open test script
// summary: Opens a given URL with window.open and reports success back through domAutomationController for the UITest.
// ---

function testWindowOpen(url) {
  window.open(url);
  window.domAutomationController.send(true);
}
