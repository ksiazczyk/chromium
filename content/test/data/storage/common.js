// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Common helpers for storage test pages
// summary: Shared JavaScript helpers that print debug output and report pass or fail status for the storage web tests.
// ---

function debug(message) {
  document.getElementById('status').textContent += `\n${message}`;
}

function done(message) {
  if (document.location.hash == '#fail')
    return;
  if (message)
    debug('PASS: ' + message);
  else
    debug('PASS');
  document.location.hash = '#pass';
}

function fail(message) {
  debug('FAILED: ' + message);
  document.location.hash = '#fail';
}

function getLog() {
  return '' + document.getElementById('status').textContent;
}
