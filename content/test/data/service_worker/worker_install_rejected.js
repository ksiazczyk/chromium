// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker that rejects its install event
// summary: Service worker test script whose oninstall handler rejects the installation promise after a short delay.
// ---

this.oninstall = function(event) {
    event.waitUntil(new Promise(function(resolve, reject) {
        setTimeout(function() { reject("Rejecting oninstall event"); }, 5);
    }));
};
