// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BFCache test extension content script
// summary: Content script that opens a runtime port connection to test automatic reconnection of content scripts across back/forward cache transitions.
// ---

const port = chrome.runtime.connect();
