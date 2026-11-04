// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock inputMethodPrivate API for tests
// summary: Mocks the chrome.inputMethodPrivate API to get and set the current input method during tests.
// ---

/*
 * A mock chrome.inputMethodPrivate API for tests.
 */
var MockInputMethodPrivate = {
  /** @private {string} */
  currentInputMethod_: '',

  // Methods from chrome.inputMethodPrivate API. //

  /**
   * Gets the current input method.
   * @return {Promise<string>}
   */
  getCurrentInputMethod() {
    return Promise.resolve(this.currentInputMethod_);
  },


  /**
   * Sets the current input method.
   * @param {string} inputMethodId The input method to set.
   * @return {Promise<void>}
   */
  setCurrentInputMethod(inputMethodId) {
    MockInputMethodPrivate.currentInputMethod_ = inputMethodId;
    return Promise.resolve();
  },

  // Methods for testing. //

  /**
   * Gets the current input method.
   * @return {string}
   */
  getCurrentInputMethodForTest() {
    return MockInputMethodPrivate.currentInputMethod_;
  },
};
