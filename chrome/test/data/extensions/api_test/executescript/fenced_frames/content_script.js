// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script signaling fenced frame load
// summary: Content script injected into fenced frames that sends a runtime message so the test knows the frame has loaded.
// ---

chrome.runtime.sendMessage({connected: true}, function(response) {});
