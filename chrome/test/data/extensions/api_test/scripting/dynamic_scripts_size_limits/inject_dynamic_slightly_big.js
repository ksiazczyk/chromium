// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Slightly oversized dynamic script fixture
// summary: Injects a div with id dynamic-slightly-big and is padded past 650 bytes to exercise the per-extension total script size limit.
// ---

var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'dynamic-slightly-big';
document.body.appendChild(div);
/*
PADDING OUT THE FILE TO BE OVER 650 BYTES
PADDING OUT THE FILE TO BE OVER 650 BYTES
PADDING OUT THE FILE TO BE OVER 650 BYTES
PADDING OUT THE FILE TO BE OVER 650 BYTES
PADDING OUT THE FILE TO BE OVER 650 BYTES
PADDING OUT THE FILE TO BE OVER 650 BYTES
PADDING OUT THE FILE TO BE OVER 650 BYTES
PADDING OUT THE FILE TO BE OVER 650 BYTES
PADDING OUT THE FILE TO BE OVER
*/
