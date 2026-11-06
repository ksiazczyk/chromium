// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test service worker that loops forever at top level
// summary: Service worker test fixture that executes an endless while(true) loop at top level, keeping the worker script busy indefinitely.
// ---

while(true) { }
