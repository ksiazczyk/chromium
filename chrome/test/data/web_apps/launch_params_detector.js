// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Launch params detector test helper
// summary: Test helper that records every launch URL delivered through window.launchQueue so tests can verify launch parameters.
// ---

// Saves all launch urls consumed by this document.
var launchParamsTargetUrls = [];

window.launchQueue.setConsumer((launchParams) => {
    console.log('Got launch at ' + launchParams.targetURL);
    launchParamsTargetUrls.push(launchParams.targetURL)
});