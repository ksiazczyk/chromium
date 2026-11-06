/*
 * Copyright 2014 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Hide keyboard key test
// summary: Verifies that tapping the hide keyboard button hides the keyboard through the virtualKeyboardPrivate API.
// ---

/**
 * Tests that tapping the hide keyboard button hides the keyboard.
 * @param {Function} testDoneCallback The callback function on completion.
 */
function testHideKeyboard(testDoneCallback) {
  onKeyboardReady(function() {
    var key = findKeyById('HideKeyboard');
    mockTap(key);
    chrome.virtualKeyboardPrivate.hideKeyboard.addExpectation();
    chrome.virtualKeyboardPrivate.lockKeyboard.addExpectation(false);
    testDoneCallback();
  });
}
