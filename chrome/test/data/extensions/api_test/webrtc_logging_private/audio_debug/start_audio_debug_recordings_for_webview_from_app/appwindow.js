// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: App window script for starting and stopping audio debug recordings
// summary: Exposes attemptAudioDebugRecording, which starts and stops WebRTC audio debug recordings targeting a webview via chrome.webrtcLoggingPrivate.
// ---

// Making it explicit that this is exposed for the background page to call.
window.attemptAudioDebugRecording = function(succeed, fail) {
  // The API calls must be made in the window that hosts the webview.
  chrome.webrtcLoggingPrivate.startAudioDebugRecordings(
      {targetWebview: true}, '', 0, function(startResult) {
        if (chrome.runtime.lastError) {
          fail(
              'startAudioDebugRecordings: ' + chrome.runtime.lastError.message);
          return;
        }
        chrome.webrtcLoggingPrivate.stopAudioDebugRecordings(
            {targetWebview: true}, '', function(stopResult) {
              if (chrome.runtime.lastError) {
                fail(
                    'stopAudioDebugRecordings: ' +
                    chrome.runtime.lastError.message);
                return;
              }
              succeed();
            });
      });
};
