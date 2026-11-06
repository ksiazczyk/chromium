// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Grit preprocess test expected output with comments
// summary: Expected output fixture for grit preprocessing tests, showing a Polymer component with grit-removed-lines markers in the HTML template and JS comments.
// ---

Polymer({
  is: 'cr-foo',

  _template: html`
    
      <button on-click="onClick_">I should be included in HTML</button>
    
    /*grit-removed-lines:2*/
  `,

  onClick_() {
    // /*grit-removed-lines:3*/
    // 
    console.log('I should be included in JS');
    // 
  }
});
