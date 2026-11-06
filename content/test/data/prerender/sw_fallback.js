// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch fallback script
// summary: Service worker script with a no-op fetch handler used as a fallback in prerendering tests.
// ---

self.onfetch = function(e) {
  return;
};
