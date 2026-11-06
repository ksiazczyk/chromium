// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script tests for sendMessage with unserializable responses
// summary: Runs tests verifying that chrome.runtime.sendMessage rejects with a serialization error when the listener responds synchronously or asynchronously with unserializable data.
// ---

chrome.test.runTests([
  // Tests that when the listener responds synchronously with a value that
  // cannot be serialized into JSON the sender is notified of the error.
  async function onMessageSyncRespondsWithUnserializableValue() {
    await chrome.test.assertPromiseRejects(
        chrome.runtime.sendMessage(
            'respond synchronously with an unserializable value'),
        'Error: Could not serialize message.');
    chrome.test.succeed();
  },


  // Tests that when the listener responds asynchronously with a value that
  // cannot be serialized into JSON the sender is notified of the error.
  async function onMessageAsyncRespondsWithUnserializableValue() {
    await chrome.test.assertPromiseRejects(
        chrome.runtime.sendMessage(
            'respond asynchronously with an unserializable value'),
        'Error: Could not serialize message.');
    chrome.test.succeed();
  },

]);
