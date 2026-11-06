// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the input mute change API test
// summary: Extension background script that listens once for the chrome.audio.onMuteChanged event and asserts the event reports the INPUT stream type as muted.
// ---

chrome.test.runTests([function waitForMuteChangedEventTests() {
  chrome.test.listenOnce(chrome.audio.onMuteChanged, function(evt) {
    chrome.test.assertEq('INPUT', evt.streamType);
    chrome.test.assertTrue(evt.isMuted);
  });
}]);

chrome.test.sendMessage('loaded');
