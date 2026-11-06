// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Isolated world 2 test content script
// summary: Content script that posts whether the num variable from the isolated world 1 extension is undefined, verifying that scripts from different extensions run in separate worlds.
// ---

// We should not be able to read the `num` variable which was defined in a.js
// from the "isolated world 1" extension.
chrome.runtime.connect().postMessage(typeof num === 'undefined');
