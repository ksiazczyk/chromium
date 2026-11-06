// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Form auto-submit script for webRequest requestBody tests
// summary: Script that submits the first form on the page automatically on load, driving the requestBody webRequest API tests.
// ---

function submitForm() {
  document.forms[0].submit();
}
window.onload = submitForm;
