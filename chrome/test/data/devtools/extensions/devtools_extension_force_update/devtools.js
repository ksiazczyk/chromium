// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: DevTools page script creating the TestPanel
// summary: Creates a DevTools panel named TestPanel from panel.html and logs PASS in the inspected window once the panel has loaded.
// ---

chrome.devtools.panels.create('TestPanel', 'icon.png', 'panel.html', () => {
  // Indicates that panel has loaded to C++ test.
  chrome.devtools.inspectedWindow.eval('console.log("PASS")');
});
