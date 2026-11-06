// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: BucketManagerHost fuzzer JS template
// summary: JavaScript template that wraps generated BucketManagerHost grammar rules in a fuzz() function run by the in-process fuzzer.
// ---

async function fuzz() {
  <bucket_manager_host_fuzzer>
}

fuzz();
