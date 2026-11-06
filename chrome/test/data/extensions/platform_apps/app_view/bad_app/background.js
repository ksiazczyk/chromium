// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bad app background script
// summary: Background script of the bad_app test fixture that opens window.html on launch and allows embed requests for app view tests.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('window.html', {}, function() {
    console.log('Bad App is running.');
    chrome.test.sendMessage('AppViewTest.LAUNCHED');
  });
});

chrome.app.runtime.onEmbedRequested.addListener(function(request) {
  console.log('Embed request received at the bad app.');
  request.allow('window.html');
});
