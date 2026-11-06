// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dedicated worker message reply fixture
// summary: Dedicated worker script that replies to posted messages, used as a DevTools test fixture.
// ---

onmessage = function(e) {
  postMessage('reply ' + e.data);
}