// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script b.js triggering history back
// summary: On load, navigates back in history so the tab is restored from the back/forward cache.
// ---

onload = function() {
  history.back();
};
