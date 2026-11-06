// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for optional host permissions test extension
// summary: Background service worker that listens for page navigation, injects a script setting the document title to success, and reports the result via chrome.test.
// ---

function changeDocumentTitle() {
  document.title = 'success';
  chrome.test.sendMessage('success');
}

chrome.webNavigation.onCommitted.addListener(async function() {
  const tab = await getCurrentTab();
  await chrome.scripting.executeScript({
    target: {tabId: tab.id},
    function: changeDocumentTitle,
  });
});

async function getCurrentTab() {
  const queryOptions = {active: true, currentWindow: true};
  const [tab] = await chrome.tabs.query(queryOptions);
  return tab;
}
