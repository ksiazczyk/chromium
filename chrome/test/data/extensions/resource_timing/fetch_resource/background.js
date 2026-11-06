// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script fetching a resource
// summary: Background service worker for the fetch resource test extension that fetches a test PNG and returns whether the request succeeded.
// ---

async function fetchResource() {
  let result;
  await fetch('/extensions/resource_timing/24.png')
      .then(() => {
        result = true;
      })
      .catch(() => {
        result = false;
      });
  return result;
}
