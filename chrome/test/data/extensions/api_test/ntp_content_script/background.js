// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the NTP content script test extension
// summary: Signals test readiness by sending a 'ready' message when the test extension's background page loads.
// ---

chrome.test.sendMessage('ready');
