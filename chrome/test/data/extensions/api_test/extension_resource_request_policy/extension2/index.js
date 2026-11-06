// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cross-extension image test script
// summary: Test script that loads test.png from another extension and reflects the load outcome in the page title.
// ---

const image = document.createElement('img');
image.onload = () => {
  document.title = 'Loaded';
};
image.onerror = () => {
  document.title = 'Image failed to load';
};
image.src = 'chrome-extension://fnbdbepgnidhjejikpionpfohdjjogpm/test.png';
document.body.appendChild(image);
