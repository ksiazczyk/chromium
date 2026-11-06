// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: CSP isolation check for the French translate test
// summary: Marks the page as failed if the inline-defined world variable leaks, verifying CSP isolation during translation.
// ---

if (typeof world != 'undefined') {
  console.log('CSP does not work correctly.');
  console.log(world);
  document.title = 'FAIL';
} else {
  world='main';
}
