// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lazy background page wait-for-request test background script
// summary: Test extension background script that starts a hanging request to keep the lazy background page alive until the request is killed.
// ---

const testServerHost = 'www.a.com';
let testServerPort;
function getServerURL(path) {
  const host = testServerHost;
  return `http://${host}:${testServerPort}/${path}`;
}

let hangingRequest;
function abortRequest() {
  hangingRequest.abort();
  return true;
}

chrome.runtime.onInstalled.addListener(function() {
  chrome.test.getConfig(function(config) {
    testServerPort = config.testServer.port;

    // Start a request that will "never" finish (at least, not for 1000
    // minutes). The browser code will keep us alive until the request is
    // killed.
    hangingRequest = new XMLHttpRequest();
    hangingRequest.onreadystatechange = function() {
      // The request hangs, so this is only ever called once.
      chrome.test.notifyPass();
    };
    hangingRequest.open('GET', getServerURL('slow?60000'), true);
    hangingRequest.send(null);
  });
});
