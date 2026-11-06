// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker adding static routes at install
// summary: Service worker test script that adds a static routing rule for a no-race URL pattern during install and calls skipWaiting.
// ---

importScripts('./race_network_request_base.js');

self.addEventListener('install', e => {
  e.addRoutes([
    {
      condition: {
        urlPattern: {pathname: "/service_worker/no_race"}
      },
      source: "fetch-event"
    }
  ]);
  self.skipWaiting();
});
