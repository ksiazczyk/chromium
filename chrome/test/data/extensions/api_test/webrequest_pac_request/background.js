// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script counting webRequest events for self.pac and title2
// summary: Background script of a test extension that counts webRequest onBeforeRequest events for /self.pac and /title2.html and signals readiness.
// ---

self.pacRequestCount = 0;
self.title2RequestCount = 0;

chrome.webRequest.onBeforeRequest.addListener(function(details) {
  ++self.pacRequestCount;
}, {urls: ['*://*/self.pac']});

chrome.webRequest.onBeforeRequest.addListener(function(details) {
  ++self.title2RequestCount;
}, {urls: ['*://*/title2.html']});

chrome.test.sendMessage('ready');
