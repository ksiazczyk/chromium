/* Copyright 2017 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: source
// title: JavaScript bridge to the native WebUI handler
// summary: Exports WebUI helpers that send commands such as getLogMessages, forceEnrollment, and forceDeviceSync to the native handler.
// ---

/**
 * JavaScript hooks into the native WebUI handler.
 */
export const WebUI = {
  getLogMessages: function() {
    chrome.send('getLogMessages');
  },

  clearLogs: function() {
    chrome.send('clearLogBuffer');
  },

  forceDeviceSync: function() {
    chrome.send('forceDeviceSync');
  },

  forceEnrollment: function() {
    chrome.send('forceEnrollment');
  },

  generateChallenge: function() {
    chrome.send('generateChallenge');
  },

  getAssertion: function() {
    chrome.send('getAssertion');
  },

  getLocalState: function() {
    chrome.send('getLocalState');
  },

  onWebContentsInitialized: function() {
    chrome.send('onWebContentsInitialized');
  },
};
