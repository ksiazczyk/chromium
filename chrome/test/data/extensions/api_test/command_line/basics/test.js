// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tests for the commandLinePrivate hasSwitch API
// summary: Runs tests asserting hasSwitch results for a present command-line switch, a nonexistent switch, and an empty switch name.
// ---

// These string constants should be consistent with those in
// chrome/browser/extensions/api/command_line_private/.
const TEST_COMMAND_LINE_SWITCH = 'command-line-private-api-test-foo';
const EMPTY_SWITCH_NAME = 'Switch name is empty.';
const NONEXISTENT_SWITCH = 'foo-bar-non-existing-switch';

const pass = chrome.test.callbackPass;
const fail = chrome.test.callbackFail;
const assertTrue = chrome.test.assertTrue;
const assertFalse = chrome.test.assertFalse;

chrome.test.runTests([
  function testHaveSwitch() {
    chrome.commandLinePrivate.hasSwitch(
        TEST_COMMAND_LINE_SWITCH, pass(function(result) {
          assertTrue(result);
        }));
  },

  function testNotHaveSwitch() {
    chrome.commandLinePrivate.hasSwitch(
        NONEXISTENT_SWITCH, pass(function(result) {
          assertFalse(result);
        }));
  },

  function testInvalidArgs() {
    chrome.commandLinePrivate.hasSwitch('', fail(EMPTY_SWITCH_NAME));
  },
]);
