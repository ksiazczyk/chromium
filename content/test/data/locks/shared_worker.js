// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker for Web Locks acquisition
// summary: Shared worker that acquires a Web Lock on message and posts the request id back to the connecting page.
// ---

'use strict';

onconnect = function(e) {
  var port = e.ports[0];

  port.onmessage = function(e) {
    // Acquire the lock.
    navigator.locks.request('worker_lock', {}, lock => {
      // Lock was acquired and will be released at the end of this scope.
      port.postMessage({rqid: e.data.rqid});
    });
  }

}
