// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: b.js
// summary: Calls history.back() on load to navigate back and exercise webNavigation back-navigation events.
// ---

onload = function() {
  history.back();
};
