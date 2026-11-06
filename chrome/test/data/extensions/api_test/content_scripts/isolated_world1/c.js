// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script reporting the shared variable back to the extension
// summary: Content script that sends the shared num variable back to the extension over a runtime connection for verification.
// ---

// Send the variable defined by a.js and modified by b.js back to the extension.
chrome.runtime.connect().postMessage(num);
