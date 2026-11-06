// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script injecting a title change for the blocked action test
// summary: Service worker that listens for webNavigation commits and calls chrome.scripting.executeScript to change the document title, exercising blocked extension actions.
// ---

function changeDocumentTitle() {
  document.title = 'success';
  chrome.test.sendMessage('injection succeeded');
}

chrome.webNavigation.onCommitted.addListener(async function(activeInfo) {
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
