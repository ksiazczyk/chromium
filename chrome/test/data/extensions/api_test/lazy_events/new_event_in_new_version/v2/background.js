// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for lazy events new version test
// summary: Background script that listens for tabs.onCreated and signals test success, used by the lazy events new event in new version extension test.
// ---

chrome.tabs.onCreated.addListener(() => {
  chrome.test.notifyPass();
});
