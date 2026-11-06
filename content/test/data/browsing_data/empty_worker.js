// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Minimal service worker with empty install handler
// summary: Service worker script with an empty install handler used by browsing data tests.
// ---

this.oninstall = function(event) {};
