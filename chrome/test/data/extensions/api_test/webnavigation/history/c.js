// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script c.js
// summary: Fixture script that pushes a history state to d.html while the page is still parsing.
// ---

history.pushState({}, 'foo', 'd.html');
