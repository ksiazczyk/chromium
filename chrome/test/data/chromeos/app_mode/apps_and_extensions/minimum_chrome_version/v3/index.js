// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Load notification script of the test app
// summary: Sends the appWindowLoaded test message once the app window has finished loading.
// ---

window.addEventListener('load', function onload() {
  chrome.test.sendMessage('appWindowLoaded');
});

