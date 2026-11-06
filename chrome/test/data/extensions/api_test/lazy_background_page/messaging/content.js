// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lazy background page messaging test content script
// summary: Content script that connects to the extension runtime and posts a message to wake the lazy background page.
// ---

const port = chrome.runtime.connect();
port.postMessage({kittenMittens: true});
