// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Options page script reporting success
// summary: Options page script that sends a success message back to the extension when the page loads.
// ---

chrome.runtime.sendMessage('success');
