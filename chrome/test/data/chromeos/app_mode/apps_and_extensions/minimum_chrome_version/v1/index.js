// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: App script signaling app window load for tests
// summary: Page script that sends the appWindowLoaded test message once the app window has finished loading.
// ---

window.addEventListener('load', function onload() {
  chrome.test.sendMessage('appWindowLoaded');
});

