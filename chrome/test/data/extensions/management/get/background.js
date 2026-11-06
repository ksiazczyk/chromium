// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Management get test background script
// summary: Background script for the management get test extension that calls chrome.management.get and asserts the returned extension id, name, type and enabled state.
// ---

chrome.management.get('pkplfbidichfdicaijlchgnapepdginl', function(info) {
  chrome.test.assertNe(null, info);
  chrome.test.assertEq('pkplfbidichfdicaijlchgnapepdginl', info.id);
  chrome.test.assertEq('simple_extension', info.name);
  chrome.test.assertEq('extension', info.type);
  chrome.test.assertTrue(info.enabled);
  chrome.test.sendMessage('success');
});
