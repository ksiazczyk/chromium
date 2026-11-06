// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script registering beforeunload handlers
// summary: Background script fixture that attempts to register beforeunload handlers in several ways to test that forbidden window APIs are blocked in extension apps.
// ---

'use strict';

const didRun = sessionStorage.didRun;

function beforeUnload() {
  chrome.test.fail();
}

try {
  delete window.onbeforeunload;
  window.onbeforeunload = beforeUnload;
} catch (e) {
}

try {
  window.addEventListener('beforeunload', beforeUnload);
} catch (e) {
}

try {
  const beforeUnloadTricky = {
    toString: function() {
      beforeUnloadTricky.toString = function() {
        return 'beforeunload';
      };
      return 'something not beforeunload';
    },
  };
  window.addEventListener(beforeUnloadTricky, beforeUnload);
} catch (e) {
}

if (!didRun) {
  sessionStorage.didRun = true;
  location.reload();
} else {
  chrome.test.succeed();
}
