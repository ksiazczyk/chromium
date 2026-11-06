// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that listens for storage changes
// summary: Content script for a.com that listens for storage change events and signals the test via domAutomationController.
// ---

chrome.storage.onChanged.addListener((changes, area) => {
  const input = document.createElement('input');
  input.id = 'callback';
  input.value += 'called';
  document.documentElement.appendChild(input);
  // Let the test know that we ran.
  window.domAutomationController.send('event handler ran');
});
