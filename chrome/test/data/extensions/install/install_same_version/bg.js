// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for same-version extension install test
// summary: Background script fixture for the test extension, returning the version string '1 again' to support same-version install testing.
// ---

function version() {
  return '1 again';
}
