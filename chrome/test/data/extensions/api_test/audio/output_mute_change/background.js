// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the output mute change API test
// summary: Listens once for chrome.audio.onMuteChanged and asserts the event reports an unmuted OUTPUT stream, then signals that the test loaded.
// ---

chrome.test.runTests([function waitForMuteChangedEventTests() {
  chrome.test.listenOnce(chrome.audio.onMuteChanged, function(evt) {
    chrome.test.assertEq('OUTPUT', evt.streamType);
    chrome.test.assertFalse(evt.isMuted);
  });
}]);

chrome.test.sendMessage('loaded');
