// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Expected JavaScript output for if expression preprocessing
// summary: Expected JavaScript output after grit preprocessing, with excluded if-expression code removed.
// ---

Polymer({
  is: 'cr-foo',

  _template: html`
    
      <button on-click="onClick_">I should be included in HTML</button>
    
    
  `,

  onClick_() {
    // 
    // 
    console.log('I should be included in JS');
    // 
  }
});
