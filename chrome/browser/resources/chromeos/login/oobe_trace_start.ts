// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * OOBE Trace
 *
 * Keeps track of how long OOBE takes to load. This script is the first thing
 * that gets executed when OOBE starts.
 */

// ---docerion
// type: source
// title: OOBE trace start script
// summary: First script executed at OOBE startup that records the initialization begin timestamp for load-time tracing.
// ---

window.oobeInitializationBeginTimestamp = performance.now();