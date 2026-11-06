// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Document_idle content script test helper
// summary: Content script that appends 'document_idle/' to the stage input element and sets the document title when injected at document_idle.
// ---

// Multiple scripts injected in the same world declare "input", so we use
// var instead of const.
var input = document.getElementById('stage');  //eslint-disable-line no-var
input.value += 'document_idle/';
document.title = 'document_idle';
