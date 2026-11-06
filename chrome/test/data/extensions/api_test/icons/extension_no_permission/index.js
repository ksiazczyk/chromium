// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Extension icon load test script
// summary: Test script that loads an extension icon as an image and sets the page title to Loaded or Not Loaded depending on whether the icon request succeeds.
// ---

const img = document.createElement('img');
img.onload = function() {
  document.title = 'Loaded';
};
img.onerror = function() {
  document.title = 'Not Loaded';
};
img.src = 'chrome://extension-icon/apocjbpjpkghdepdngjlknfpmabcmlao/24/0';
document.body.appendChild(img);
