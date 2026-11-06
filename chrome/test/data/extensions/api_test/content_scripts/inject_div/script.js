// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script injecting a div
// summary: Content script for the inject_div API test that creates a div with id 'injected' and appends it to the document body.
// ---

const div = document.createElement('div');
div.id = 'injected';
document.body.appendChild(div);
