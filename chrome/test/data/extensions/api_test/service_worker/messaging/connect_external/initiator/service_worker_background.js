// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker connecting externally to the target extension
// summary: Service worker test script that opens a runtime.connect port to a fixed target extension ID and asserts the round-trip reply message.
// ---

// The extension resides in ../target/*
const kTargetExtensionId = 'pkplfbidichfdicaijlchgnapepdginl';

chrome.test.runTests([function testConnectExternal() {
  const port = chrome.runtime.connect(kTargetExtensionId);
  port.onMessage.addListener(msg => {
    console.info('{worker} initiator extension got message reply: ' + msg);
    chrome.test.assertEq('initiator->target->initiator', msg);
    chrome.test.succeed();
  });
  console.info('created port');
  port.postMessage('initiator->target');
}]);
