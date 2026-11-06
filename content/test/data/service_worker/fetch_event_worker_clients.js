// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker worker clients count test
// summary: Service worker test script that reports the number of worker clients from clients.matchAll for a counting endpoint.
// ---

self.onfetch = function(event) {
    const pathname = new URL(event.request.url).pathname;
    if (pathname != '/service_worker/count_worker_clients') {
        return;
    }
    event.respondWith((async () => {
        const workerClients = await self.clients.matchAll({type: 'worker'});
        const blob = new Blob([workerClients.length]);
        const response = new Response(blob, {
            headers: { 'Content-Type': 'text/html' }
        });
        return response;
    })());
};
