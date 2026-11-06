// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for older version install test extension
// summary: Background script of the test extension fixture that reports version 0.9 so tests can verify upgrading from an older installed version.
// ---

function version() {
  return '0.9';
}
