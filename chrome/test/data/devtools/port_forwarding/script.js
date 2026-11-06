// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Port forwarding test script
// summary: Test script that sets the body text to 'content' on load and exposes helpers returning the body text content and computed left margin for test assertions.
// ---

function onLoad() {
  document.body.textContent = 'content';
}

function getBodyTextContent() {
  return document.body.textContent;
}

function getBodyMarginLeft() {
  return window.getComputedStyle(document.body).marginLeft;
}
