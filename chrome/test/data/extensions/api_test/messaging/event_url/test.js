// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Message verification script for the event URL test
// summary: Collects messages received via chrome.test and verifies that the expected three messages arrive before reporting pass or fail.
// ---

const messages = [];

function messageReceived(data) {
  messages.push(data);
}

function evaluateMessages() {
  if (messages.length !== 3) {
    chrome.test.notifyFail(`Got ${messages.length} messages instead of 3`);
  } else if (
      messages[0] !== 'no restriction' || messages[1] !== 'http://a.com/' ||
      messages[2] !== 'last message') {
    chrome.test.notifyFail(
        `Got wrong messages: ${messages[0]}, ` +
        `${messages[1]}, ${messages[2]}`);
  } else {
    chrome.test.notifyPass();
  }
}


chrome.test.onMessage.addListener(function(info) {
  messageReceived(info.data);
  if (info.lastMessage) {
    evaluateMessages();
  }
});
