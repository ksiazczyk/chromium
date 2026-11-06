// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Socket unload test background script
// summary: Background script for the chrome.socket unload API test that creates a TCP socket and listens on port 1234, asserting the listen result is 0.
// ---

const socket = chrome.socket;

const onListen = function(result) {
  chrome.test.assertEq(0, result);
  chrome.test.succeed();
};

const onCreate = function(socketInfo) {
  const sid = socketInfo.socketId;
  socket.listen(sid, '0.0.0.0', 1234, onListen);
};

chrome.test.runTests([
  function bind() {
    socket.create('tcp', {}, onCreate);
  },
]);
