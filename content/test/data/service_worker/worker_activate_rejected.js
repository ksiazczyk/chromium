// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test service worker whose activation is rejected
// summary: Test service worker whose onactivate handler waits on a promise that rejects after 5 milliseconds, for testing rejected activation.
// ---

this.onactivate = function(event) {
    event.waitUntil(new Promise(function(resolve, reject) {
        setTimeout(reject, 5);
    }));
};
