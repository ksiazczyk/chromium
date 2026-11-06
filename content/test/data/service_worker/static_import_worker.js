// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Static import test service worker
// summary: Service worker that statically imports the worker.js module to exercise static import behavior.
// ---

import * as module from './worker.js';
