// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Remote session state change listener test
// summary: Browser test that adds a synchronous onRemoteSessionStateChange listener at startup so it survives service worker shutdown and reports success when the event fires.
// ---

// Event listeners need to be added synchronously at startup in order to survive
// a service worker shutdown.
chrome.webAuthenticationProxy.onRemoteSessionStateChange.addListener(() => {
  chrome.test.succeed();
});
