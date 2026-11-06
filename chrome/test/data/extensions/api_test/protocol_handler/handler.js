// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Handler page script posting the protocol parameter
// summary: Reads the protocol query parameter and posts it to the opener or top window via postMessage so the tests can observe handler navigation.
// ---

const url = new URL(window.location);
const searchParams = new URLSearchParams(url.search);
(window.opener || window.top)
    .postMessage({protocol: searchParams.get('protocol')}, '*');
