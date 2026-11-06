// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker URL test script
// summary: Shared worker script that posts its location URL back on connect, used to verify shared worker script URL handling.
// ---

onconnect = (e) => {
  const port = e.ports[0];
  port.postMessage(location.href);
  close();
};
