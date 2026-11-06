// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: big.js oversized user script test fixture
// summary: Padded user script fixture over 700 bytes used to verify that scripts exceeding the size limit are rejected.
// ---

const div = document.createElement('div');
div.id = 'big';
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
