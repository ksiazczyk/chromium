// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker for the remove_with_pending test
// summary: Extension service worker that registers an empty runtime.onMessage listener, giving the test a worker that can be removed while messages are pending.
// ---

chrome.runtime.onMessage.addListener(() => {});
