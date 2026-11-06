// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: formatError helper for test pages
// summary: JavaScript helper that formats an error object as name and message for use in browser tests.
// ---

function formatError(error) {
  return error.name + ' - ' + error.message;
}
