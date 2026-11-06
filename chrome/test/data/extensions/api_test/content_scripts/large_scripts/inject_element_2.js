// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Padded second content script exceeding the total size limit
// summary: Test content script that injects a div with id 'injected_2' and is padded to over 700 bytes so loading it would exceed the extension's total script size limit.
// ---

const div = document.createElement('div');
div.id = 'injected_2';
document.body.appendChild(div);
/*
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
PADDING OUT THE FILE TO BE OVER 700 BYTES
*/
