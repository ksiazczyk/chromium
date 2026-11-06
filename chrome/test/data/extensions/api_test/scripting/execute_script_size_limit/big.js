// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Big test script padded over 700 bytes
// summary: Test fixture script that injects a div with id 'big' and is padded to exceed 700 bytes so executeScript rejects it as too large.
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
