// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch event reload test
// summary: Service worker test script that answers fetches with a page reporting whether the event is a reload.
// ---

this.onfetch = function(event) {
    var headers = new Headers;
    headers.set('Content-Type', 'text/html; charset=UTF-8');
    var blob = new Blob(['<title>reload='+ event.isReload + '</title>']);
    var response = new Response(blob, {
        headers: headers
    });
    event.respondWith(response);
};
