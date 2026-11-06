// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker respondWith fetch test
// summary: Service worker test script that responds to fetch events with fetch(), optionally targeting a URL from a query parameter.
// ---

this.onfetch = function(event) {
  var url = new URL(event.request.url);
  var target = url.searchParams.get('url');
  if (target) {
    event.respondWith(fetch(target, {mode: 'cors'}));
    return;
  }
  event.respondWith(fetch(event.request));
};
