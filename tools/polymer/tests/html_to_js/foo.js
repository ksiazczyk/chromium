// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo.js fixture for the html_to_js test
// summary: JavaScript fixture defining a cr-foo Polymer element with an html template placeholder that the html_to_js test replaces with foo.html content.
// ---

Polymer({
  is: 'cr-foo',

  _template: html`
{__html_template__}
  `,
});
