// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dedicated worker classic script import fixture
// summary: Dedicated worker that imports a classic script via importScripts and replies with its global message variable.
// ---

// global message var is provided by this classic script.
importScripts("/devtools/worker_imported_classic.js");

onmessage = function(e) {
  postMessage(['reply', message, e.data].join(' '));
}