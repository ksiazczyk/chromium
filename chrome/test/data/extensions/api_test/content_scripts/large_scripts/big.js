// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Padded content script exceeding the size limit
// summary: Test content script that injects a div with id BIG and is padded to over 800 bytes so it exceeds the individual script size limit.
// ---

const div = document.createElement('div');
div.id = 'BIG';
document.body.appendChild(div);
/*
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
PADDING OUT THE FILE TO BE OVER 800 BYTES
*/
