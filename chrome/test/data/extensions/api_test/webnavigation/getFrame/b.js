// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script that removes the iframe on load
// summary: Onload handler for the b page that removes its iframe element to exercise frame removal in the getFrame tests.
// ---

onload = function() {
  let frame = document.getElementById('frame');
  frame.parentNode.removeChild(frame);
  frame = null;
};
