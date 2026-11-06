// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Detach during evaluation content script
// summary: Content script that appends a detach-evaluated marker div to the parent document and removes the injected element, exercising detachment during script evaluation.
// ---

{
  const div = parent.document.createElement('div');
  div.setAttribute('id', 'detach-evaluated');
  parent.document.body.appendChild(div);
}

parent.document.querySelector('#injected').remove();
