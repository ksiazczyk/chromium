// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Deep stack trace test extension service worker
// summary: Service worker script for a test extension that logs a console error through a multi-layer call stack, exercising the error console's stack trace reporting.
// ---

function explodes() {
  console.error('Boom!');
}

function inTheMiddle() {
  explodes();
}

function calledFirst() {
  inTheMiddle();
}

calledFirst();
