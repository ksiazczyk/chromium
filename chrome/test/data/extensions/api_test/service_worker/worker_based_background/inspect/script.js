// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background inspect test script
// summary: Minimal background service worker script that signals test success by calling chrome.test.notifyPass().
// ---

chrome.test.notifyPass();
