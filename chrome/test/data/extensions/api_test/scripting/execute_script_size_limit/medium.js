// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Medium test script padded over 500 bytes
// summary: Test fixture script that injects a div with id 'medium' and is padded to exceed 500 bytes for testing the combined script size limit.
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
