// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: fetch_in_install.js service worker
// summary: Service worker test script that performs a fetch of fetch_in_install.html during the install event.
// ---

this.oninstall = function(e) { e.waitUntil(fetch('fetch_in_install.html')); };