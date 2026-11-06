// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Extension API test verifying exceptions in handlers do not crash
// summary: Runs chrome.test cases that throw errors in API callbacks and listeners, asserting the exception handler reports stack traces instead of crashing.
// ---

// A named function that throws the error, used to verify that the error message
// has a stack trace that contains the relevant stack frames.
function throwNewError(message) {
  throw new Error(message);
}

chrome.test.runTests([
  function tabsCreateThrowsError() {
    chrome.test.setExceptionHandler(function(message, exception) {
      chrome.test.assertTrue(message.indexOf('throwNewError') >= 0);
      chrome.test.assertEq('tata', exception.message);
      chrome.test.succeed();
    });
    chrome.tabs.create({}, function() {
      throwNewError('tata');
    });
  },

  function tabsOnCreatedThrowsError() {
    const listener = function() {
      throwNewError('hi');
    };
    chrome.test.setExceptionHandler(function(message, exception) {
      chrome.test.assertTrue(message.indexOf('throwNewError') >= 0);
      chrome.tabs.onCreated.removeListener(listener);
      chrome.test.succeed();
    });
    chrome.tabs.onCreated.addListener(listener);
    chrome.tabs.create({});
  },

  function permissionsGetAllThrowsError() {
    // permissions.getAll has a custom callback, as do many other methods, but
    // this is easy to call.
    chrome.test.setExceptionHandler(function(message, exception) {
      chrome.test.assertTrue(message.indexOf('throwNewError') >= 0);
      chrome.test.assertEq('boom', exception.message);
      chrome.test.succeed();
    });
    chrome.permissions.getAll(function() {
      throwNewError('boom');
    });
  },
]);
