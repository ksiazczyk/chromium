// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Oversized dynamic script fixture
// summary: Injects a div with id dynamic-too-big and is padded past 700 bytes to exceed the per-script size limit during registration.
// ---

var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'dynamic-too-big';
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
