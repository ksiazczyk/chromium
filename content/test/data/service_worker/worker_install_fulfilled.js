// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test service worker whose install is fulfilled
// summary: Test service worker whose oninstall handler waits on a promise resolving after 5 milliseconds and also waits on a non-promise value.
// ---

this.oninstall = function(event) {
    event.waitUntil(new Promise(function(r) { setTimeout(r, 5); }));
    event.waitUntil(1);
};
