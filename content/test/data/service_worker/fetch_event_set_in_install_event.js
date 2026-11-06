// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch handler set in install event test
// summary: Service worker test script that installs its fetch handler during the install event and replies with a 301 response.
// ---

this.oninstall = function(event){
    this.onfetch = function(fetchevent) {
        var headers = new Headers;
        headers.set('Content-Language', 'fi');
        headers.set('Content-Type', 'text/html; charset=UTF-8');
        var blob = new Blob(["This resource is gone. Gone, gone, gone."]);
        var response = new Response(blob, {
            status: 301,
            statusText: 'Moved Permanently',
            headers: headers
        });

        fetchevent.respondWith(response);
    };
};
