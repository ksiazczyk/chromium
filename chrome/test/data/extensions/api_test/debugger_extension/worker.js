// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker script for debugger target discovery test
// summary: Shared worker entry point that imports worker_imported.js so the debugger test can discover a newly created worker target.
// ---

importScripts('worker_imported.js');
