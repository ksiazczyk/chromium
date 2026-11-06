// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script triggering runtime.lastError for error console test
// summary: Test extension background script that calls chrome.permissions.remove twice so one unchecked lastError is reported to the error console while the checked one is not.
// ---

// This shouldn't be sent to the error console, because we "handle" the error
// by checking chrome.runtime.lastError.
chrome.permissions.remove({permissions: ['kalman']}, function() {
  const error = chrome.runtime.lastError;
});

// This should be sent to the error console, because lastError is unchecked.
chrome.permissions.remove({permissions: ['foobar']}, function() {});
