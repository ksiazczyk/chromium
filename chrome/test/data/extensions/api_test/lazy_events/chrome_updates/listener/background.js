// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the chrome updates listener test extension
// summary: Minimal test extension background script that registers an onInstalled listener and signals test success via chrome.test.notifyPass.
// ---

chrome.runtime.onInstalled.addListener(function(info) {});

chrome.test.notifyPass();
