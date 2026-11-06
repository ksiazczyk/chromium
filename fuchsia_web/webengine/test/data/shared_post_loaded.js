// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker loaded message script
// summary: Shared worker script that posts a loaded message on connect to verify shared worker startup.
// ---

self.addEventListener("connect", (evt) => {
    evt.ports[0].postMessage("loaded");
});
