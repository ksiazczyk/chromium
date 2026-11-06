// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for install_v2 test extension
// summary: Background script of the version 2 test extension used by extension install tests, returning the version string 2.0.
// ---

function version() {
  return '2.0';
}
