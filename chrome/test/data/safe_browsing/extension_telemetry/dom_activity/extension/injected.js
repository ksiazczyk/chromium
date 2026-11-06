// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected script for file-based executeScript testing
// summary: Minimal script that logs a message when injected via chrome.scripting.executeScript, used to trigger the file injection telemetry signal.
// ---

console.log('Injected via popup (file)');
