// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected element test script
// summary: Test content script that appends a div with id 'injected' to the page body for the scripting API test.
// ---

// NOTE: Using `var` because multiple scripts are injected that append divs.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected';
document.body.appendChild(div);
