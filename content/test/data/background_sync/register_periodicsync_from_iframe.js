// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Periodic Sync Registration From IFrame Script
// summary: Registers an empty service worker and a periodic sync, then posts the registration result to the parent window.
// ---

'use strict';

navigator.serviceWorker.register('empty_service_worker.js')
  .then(() => navigator.serviceWorker.ready)
  .then(registration => registration.periodicSync.register('foo', {}))
  .then(() => parent.postMessage('registration succeeded', '*'),
      () => parent.postMessage('registration failed', '*'));
