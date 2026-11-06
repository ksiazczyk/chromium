// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Second injected element content script
// summary: Content script fixture that appends a div with id 'injected_2' so tests can verify multiple registered scripts inject.
// ---

// NOTE: Using `var` because multiple scripts are injected that append divs.
var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'injected_2';
document.body.appendChild(div);
