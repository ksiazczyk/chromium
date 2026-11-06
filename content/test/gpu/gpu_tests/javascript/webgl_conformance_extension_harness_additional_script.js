// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebGL conformance extension harness load flag script
// summary: Sets a window loaded flag on page load for the WebGL conformance extension harness.
// ---

window.onload = function() { window._loaded = true; }