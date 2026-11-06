// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Static router race mode test service worker
// summary: Service worker with static routes for race-network-and-fetch-handler and fetch-event sources used in race testing.
// ---

importScripts('./race_network_request_base.js');

self.addEventListener('install', e => {
  e.addRoutes([
    {
      condition: {
        urlPattern: {pathname: "/service_worker/race_network_and_fetch"}
      },
      source: "race-network-and-fetch-handler"
    },
    {
      condition: {
        urlPattern: {pathname: "/service_worker/no_race"}
      },
      source: "fetch-event"
    }
  ]);
  self.skipWaiting();
});
