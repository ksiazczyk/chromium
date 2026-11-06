// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Metrics Internals unload warning
// summary: Entry script that registers a beforeunload handler so users get a confirmation dialog before leaving the page and discarding accumulated logs.
// ---

window.addEventListener('beforeunload', function(event) {
  // Since leaving the page discards the accumulated logs, show a confirmation
  // dialog when the user attempts to leave.
  event.returnValue = '';
});
