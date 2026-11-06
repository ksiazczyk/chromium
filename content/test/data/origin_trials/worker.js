// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker script for origin trial testing
// summary: Web worker message handler that calls the origin trials test method and posts whether it succeeded.
// ---

onmessage = function(e) {
  const result = (() => {
    try {
      internals.originTrialsTest().normalMethod();
      return true;
    } catch (e) {
      return false;
    }
  })();
  postMessage(result);
};
