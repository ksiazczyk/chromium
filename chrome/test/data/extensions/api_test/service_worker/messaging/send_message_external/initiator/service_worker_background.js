// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Initiator service worker test for external messaging
// summary: Sends a runtime message to the target extension and asserts the echoed response to test runtime.sendMessage between service worker extensions.
// ---

// The extension resides in ../target/*
const kTargetExtensionId = 'pkplfbidichfdicaijlchgnapepdginl';

chrome.test.runTests([function testSendMessageExternal() {
  chrome.runtime.sendMessage(
      kTargetExtensionId, 'initiator->target', function(response) {
        console.info(
            'Extension got response from other extension: ' + response);
        chrome.test.assertEq('initiator->target->initiator', response);
        chrome.test.succeed();
      });
}]);
