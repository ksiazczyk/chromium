// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: webNavigation onCommitted URL filter test
// summary: Browser test verifying that onCommitted events are delivered only to listeners whose URL filters match the navigated pages.
// ---

const scriptUrl = '_test_resources/api_test/webnavigation/framework.js';
const loadScript = chrome.test.loadScript(scriptUrl);

loadScript.then(async function() {
  const getURL = chrome.runtime.getURL;
  const tab = await promise(chrome.tabs.create, {url: 'about:blank'});
  chrome.test.runTests([
    function dontGetEventToWrongUrl() {
      let aVisited = false;
      chrome.webNavigation.onCommitted.addListener(function(details) {
        chrome.test.fail();
      }, {url: [{pathSuffix: 'never-navigated.html'}]});
      chrome.webNavigation.onCommitted.addListener(function(details) {
        chrome.test.assertTrue(details.url === getURL('a.html'));
        aVisited = true;
      }, {url: [{pathSuffix: 'a.html'}]});
      chrome.webNavigation.onCommitted.addListener(function(details) {
        chrome.test.assertTrue(details.url === getURL('b.html'));
        chrome.test.assertTrue(aVisited);
        chrome.test.succeed();
      }, {url: [{pathSuffix: 'b.html'}]});
      chrome.tabs.update(tab.id, {url: getURL('a.html')});
    },
  ]);
});
