// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker setting a worker flag
// summary: Service worker test script that sets self.workerFlag so tests can verify the worker script executed.
// ---

self.workerFlag = 'worker flag';
