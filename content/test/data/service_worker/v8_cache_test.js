// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: V8 cache test script
// summary: Test script that changes the document title and pads its size past 1 KB to trigger the code caching heuristic.
// ---

document.title = "Title was changed by the script.";

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
