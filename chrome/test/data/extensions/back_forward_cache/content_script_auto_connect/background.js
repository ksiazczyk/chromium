// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BFCache test extension background script
// summary: Background script of the test extension that listens for runtime connections so content script auto-connect behavior can be tested with back/forward cache.
// ---

chrome.runtime.onConnect.addListener(() => {});
