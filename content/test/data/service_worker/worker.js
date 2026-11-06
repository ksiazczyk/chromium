// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Minimal test service worker padded for code caching
// summary: Test service worker with an empty install handler and filler comments pushing the script over 1 KB to trigger the code caching heuristic.
// ---

globalThis.oninstall = function(event) {};

// So sorry about this waste of bytes:
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)
// Filler comment, to trigger code caching heuristic (script > 1K.)

