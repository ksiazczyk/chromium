/**
 * Copyright 2012 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// Helper / error handling functions.

// ---docerion
// type: test
// title: WebRTC test helper and error handling functions
// summary: Shared debug, logging and error helpers used by the WebRTC browser test pages.
// ---

/**
 * Prints a debug message.
 */
function debug(txt) {
  console.log(txt);
}

/**
 * Logs a value and returns it.
 *
 * @param {string} message The message to return.
 * @return {string}
 */
function logAndReturn(message) {
  debug('Returning ' + message + ' to test.');
  return message;
}

function success(method) {
  debug(method + '(): success.');
}

class MethodError extends Error {
  constructor(method, error) {
    super(method + '() failed: ' + JSON.stringify(error));
    this.name = "MethodError";
  }
}
