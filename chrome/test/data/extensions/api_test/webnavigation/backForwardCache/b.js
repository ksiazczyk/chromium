// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: History back script for test page b
// summary: On-load script that calls history.back() to return to page a and trigger a back/forward cache restore during the test.
// ---

onload = function() {
  history.back();
};
