// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected element content script 2
// summary: Test content script that appends a div with the id 'injected_2' to the document body.
// ---

// NOTE: Using `var` because multiple scripts are injected that append divs.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_2';
document.body.appendChild(div);
