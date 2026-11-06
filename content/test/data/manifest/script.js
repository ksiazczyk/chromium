// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Manifest link helper script
// summary: JavaScript helper that injects a link rel=manifest pointing to a given URL into the document head, or clears it.
// ---

function setManifestTo(url) {
  clearManifest();

  var link = document.createElement('link');
  link.rel = 'manifest';
  link.href = url;
  document.head.appendChild(link);
}
function clearManifest() {
  // Clear everything.
  document.head.innerHTML = '';
}
