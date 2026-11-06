// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker test script with import
// summary: Shared worker script used by the workerWithImport test; it imports worker.js via importScripts to reuse its connect handling.
// ---

importScripts('worker.js');
