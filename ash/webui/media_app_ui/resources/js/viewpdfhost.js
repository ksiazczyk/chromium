// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: View PDF host page script
// summary: Small script that reads the title and blob UUID query parameters and points an iframe at the viewpdf.html asset in the chrome-untrusted media app origin.
// ---

const params = new URLSearchParams(document.location.search);
const title = params.get('title');
const blob = params.get('blobUuid');
document.title = title;
document.querySelector('iframe').src =
    'chrome-untrusted://media-app/assets/viewpdf.html?' +
    `${new URLSearchParams({title, blob})}`;
