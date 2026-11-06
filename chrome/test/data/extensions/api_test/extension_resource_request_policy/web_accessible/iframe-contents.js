// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe load signaling script
// summary: Script that calls window.top.iframeLoaded() to signal the parent page, since iframe onload fires even for denied loads.
// ---

// We can't use the onload handler for the iframe (that fires for denied loads
// too). To make sure that right iframe actually loaded, we signal the parent.
window.top.iframeLoaded();
