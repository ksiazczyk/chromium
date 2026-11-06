// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script signalling fenced frame connection
// summary: Content script injected into the fenced frame inner page that sends a runtime message to notify the test extension it is connected
// ---

chrome.runtime.sendMessage({connected: true}, function(response) {});
