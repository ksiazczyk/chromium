// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script
// summary: Background script fixture for the version 1.0 test extension used by extension install tests, defining a version function that returns '1.0'.
// ---

function version() {
  return '1.0';
}
