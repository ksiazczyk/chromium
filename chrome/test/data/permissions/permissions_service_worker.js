// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Permissions service worker script
// summary: Service worker that, on install, queries the geolocation permission state and attaches an empty change handler.
// ---

self.addEventListener('install', async function(event) {
    let permissionState = await navigator.permissions.query({name:'geolocation'})
    permissionState.onchange = function() {}
});