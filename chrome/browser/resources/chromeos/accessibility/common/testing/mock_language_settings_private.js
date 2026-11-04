// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock languageSettingsPrivate API for tests
// summary: Mocks the chrome.languageSettingsPrivate API to add, remove and check input methods in tests.
// ---

/*
 * A mock chrome.languageSettingsPrivate API for tests.
 */
var MockLanguageSettingsPrivate = {
  /** @private {array<string>} */
  inputMethods: [],

  // Methods from chrome.languageSettingsPrivate API. //

  /**
   * Adds an input method ID.
   * @param {string} methodId
   */
  addInputMethod(methodId) {
    MockLanguageSettingsPrivate.inputMethods.push(methodId);
  },

  removeInputMethod(methodId) {
    const index = MockLanguageSettingsPrivate.inputMethods.indexOf(methodId);
    if (index >= 0) {
      MockLanguageSettingsPrivate.inputMethods.splice(index, 1);
    }
  },

  // Methods for testing. //

  /**
   * Checks if an input method exists.
   * @param {stromg} methodId
   * @return {boolean} True if the method is present.
   */
  hasInputMethod(methodId) {
    return MockLanguageSettingsPrivate.inputMethods.includes(methodId);
  },
};
