// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo_expected.ts fixture for the html_to_js test
// summary: Expected TypeScript output of the html_to_js test with the foo.html markup inlined between the html template start and end markers.
// ---

Polymer({
  is: 'cr-foo',

  _template: html`
<!--_html_template_start_-->
<style>
  div {
    font-size: 2rem;
  }
</style>
<div>Hello world</div>
<!--_html_template_end_-->
  `,
});
