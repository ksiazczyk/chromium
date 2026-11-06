// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Touchpad pinch test app window script
// summary: Sends a test message on launch and whenever a wheel event is seen, letting browser tests verify touchpad pinch behavior.
// ---

window.onload = () => {
  document.body.addEventListener('wheel', (e) => {
    chrome.test.sendMessage('Seen wheel event');
  });

  chrome.test.sendMessage('Launched');
};
