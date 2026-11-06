// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe script performing the COEP-blocked fetch
// summary: Fetches the parent page URL in no-cors mode from within the iframe and posts SUCCESS or FAIL to the parent so the content script can check COEP blocking.
// ---

const params = new URLSearchParams(location.search);

fetch(params.get('href'), {mode: 'no-cors'})
    .then(
        () => {
          parent.postMessage('SUCCESS', '*');
        },
        () => {
          parent.postMessage('FAIL', '*');
        });
