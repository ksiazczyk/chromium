// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker GPC reporting script
// summary: Shared worker script that answers incoming messages with whether navigator.globalPrivacyControl is true.
// ---

self.onconnect = e => {
  const port = e.ports[0];
  port.onmessage = async e => {
    port.postMessage(self.navigator.globalPrivacyControl === true);
  };
};
