// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script injecting an image to test CSP bypass
// summary: Content script that injects an image into the matched page and reports via a runtime port whether the image loaded, showing content scripts can bypass page CSP.
// ---

// Inject an image.
const img = document.createElement('img');
img.onload = function() {
  chrome.runtime.connect().postMessage(true);
};
img.onerror = function() {
  chrome.runtime.connect().postMessage(false);
};
img.src = 'icon3.png';
document.body.appendChild(img);
