// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker throwing many error types
// summary: Service worker for the messaging test extension whose onMessage listener throws a different error type depending on the received message.
// ---

class CustomError extends Error {
  constructor(...params) {
    super(...params);
  }
}

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  switch (message) {
    case 'Error':
      throw new Error('plain error message');
    case 'EvalError':
      throw new EvalError('eval error message');
    case 'ReferenceError':
      throw new ReferenceError('reference error message');
    case 'SyntaxError':
      throw new SyntaxError('syntax error message');
    case 'TypeError':
      throw new TypeError('type error message');
    case 'URIError':
      throw new URIError('uri error message');
    case 'AggregateError':
      throw new AggregateError(
          [new Error('an error')], 'aggregate error message');
    case 'CustomError':
      throw new CustomError('custom error message');
    default:
      chrome.test.fail('Unexpected test message: ' + message);
      break;
  }
});
