// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker fetch script
// summary: Web worker script for subresource filter tests that fetches a data file and posts whether the fetch succeeded or failed.
// ---

fetch('./worker_fetch_data.txt')
  .then(_ => postMessage('FetchSucceeded'),
        _ => postMessage('FetchFailed'));
