// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unload listener test script
// summary: Registers onbeforeunload and onunload handlers that send an XMLHttpRequest to example.com for unload listener testing.
// ---

function onUnload() {
  const xhr = new XMLHttpRequest();
  xhr.open('GET', 'https://www.example.com/', true);
  xhr.send();
}

window.onbeforeunload = onUnload;
window.onunload = onUnload;
