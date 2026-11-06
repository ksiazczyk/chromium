// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script logging messages and causing a runtime error
// summary: Content script for the error console test that logs console messages and then triggers a runtime type error.
// ---

function logMessage() {
  console.info('logged message');
}

function warnMessage() {
  console.warn('warned message');
}

logMessage();
warnMessage();

const bar = undefined;
bar.foo = 'baz';
