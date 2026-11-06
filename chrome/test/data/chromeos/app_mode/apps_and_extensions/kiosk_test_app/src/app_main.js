// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Kiosk test app window load script
// summary: Sends the appWindowLoaded message via chrome.test once the kiosk app window has finished loading.
// ---

window.addEventListener('load', function onload() {
  chrome.test.sendMessage('appWindowLoaded');
});

