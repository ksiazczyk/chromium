// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: virtualKeyboard restrictFeatures API tests
// summary: Runs browser tests that call chrome.virtualKeyboard.restrictFeatures with all features enabled, all disabled, and mixed or partial settings, asserting the returned update values.
// ---

chrome.test.runTests([
  function setRestrictedKeyboard() {
    chrome.virtualKeyboard.restrictFeatures(
        {
          autoCompleteEnabled: true,
          autoCorrectEnabled: true,
          spellCheckEnabled: true,
          voiceInputEnabled: true,
          handwritingEnabled: true,
        },
        chrome.test.callbackPass(function(update) {
          chrome.test.assertEq(
              {
                autoCompleteEnabled: true,
                autoCorrectEnabled: true,
                spellCheckEnabled: true,
                voiceInputEnabled: true,
                handwritingEnabled: true,
              },
              update);
        }));
  },
  function setNotRestrictedKeyboard() {
    chrome.virtualKeyboard.restrictFeatures(
        {
          autoCompleteEnabled: false,
          autoCorrectEnabled: false,
          spellCheckEnabled: false,
          voiceInputEnabled: false,
          handwritingEnabled: false,
        },
        chrome.test.callbackPass(function(update) {
          chrome.test.assertEq(
              {
                autoCompleteEnabled: false,
                autoCorrectEnabled: false,
                spellCheckEnabled: false,
                voiceInputEnabled: false,
                handwritingEnabled: false,
              },
              update);
        }));
  },
  function differentAndPartialEnabledStates() {
    chrome.virtualKeyboard.restrictFeatures(
        {
          autoCompleteEnabled: true,
          autoCorrectEnabled: false,
          spellCheckEnabled: true,
          voiceInputEnabled: false,
          // handwritingEnabled is omitted.
        },
        chrome.test.callbackPass());
  },
]);
