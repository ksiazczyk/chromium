// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebIDL fuzzer fuzz() function template
// summary: JavaScript template defining an async fuzz() entry point whose body is filled in by the WebIDL in-process fuzzer grammar.
// ---

async function fuzz() {
    <webidlfuzzer>
}

fuzz();
