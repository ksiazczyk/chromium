// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: XHR test script
// summary: Test script that sends a GET XMLHttpRequest to data.json when the page loads, exercising the webRequest extension API.
// ---

function sendXHR() {
  const req = new XMLHttpRequest();
  req.open('GET', 'data.json', true);
  req.send(null);
}

window.onload = function() {
  sendXHR();
};
