// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: medium.js padded user script test fixture
// summary: Padded user script fixture over 500 bytes used with small.js to test the combined script size limit.
// ---

const div = document.createElement('div');
div.id = 'medium';
document.body.appendChild(div);
/*
PADDING OUT THE FILE TO BE OVER 500 BYTES
PADDING OUT THE FILE TO BE OVER 500 BYTES
PADDING OUT THE FILE TO BE OVER 500 BYTES
PADDING OUT THE FILE TO BE OVER 500 BYTES
PADDING OUT THE FILE TO BE OVER 500 BYTES
PADDING OUT THE FILE TO BE OVER 500 BYTES
PADDING OUT THE FILE TO BE OVER 500 BYTES
*/
