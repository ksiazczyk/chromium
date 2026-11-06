// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Multipart and plaintext form POST webRequest tests
// summary: Runs POST request tests for multipart and plaintext forms, covering parseable form data and raw-only request bodies.
// ---

runTests([
  // Navigates to a page with a form and submits it, generating a POST request.
  // Multipart-encoded form.
  sendPost('multipart.html', true /*parseableForm*/),
  // An unparseable form, thus only raw POST data are extracted.
  sendPost('plaintext.html', false /*parseableForm*/),
]);
