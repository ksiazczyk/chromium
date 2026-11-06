// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Second detach during evaluation content script
// summary: Second content script that appends a detach2-evaluated marker div to the parent document and removes the injected element as part of the detach-during-evaluation test.
// ---

{
  const div = parent.document.createElement('div');
  div.setAttribute('id', 'detach2-evaluated');
  parent.document.body.appendChild(div);
}

parent.document.querySelector('#injected').remove();
