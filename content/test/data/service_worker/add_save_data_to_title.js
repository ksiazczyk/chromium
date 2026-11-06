// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker echoing Save-Data header into page title
// summary: Service worker test script that responds to fetch events with an HTML title containing the request's Save-Data header value.
// ---

this.onfetch = function(event) {
    var value = event.request.headers.get('Save-Data');
    var blob = new Blob(['<title>save-data='+ value + '</title>']);
    var response = new Response(blob, {
        headers: { 'Content-Type': 'text/html' }
    });
    event.respondWith(response);
};
