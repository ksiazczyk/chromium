// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Manifest content script fixture
// summary: Injects a div with id manifest and is padded past 400 bytes; it is the content script declared statically in the manifest.
// ---

var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'manifest';
document.body.appendChild(div);
/*
PADDING OUT THE FILE TO BE OVER 400 BYTES
PADDING OUT THE FILE TO BE OVER 400 BYTES
PADDING OUT THE FILE TO BE OVER 400 BYTES
PADDING OUT
*/
