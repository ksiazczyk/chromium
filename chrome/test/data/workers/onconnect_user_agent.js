// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker user agent test script
// summary: Shared worker test script that posts the navigator user agent string back through the connecting port.
// ---

self.onconnect = e => {
  e.ports[0].postMessage(navigator.userAgent);
};