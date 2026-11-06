// ---docerion
// type: test
// title: Expected wrapper template fixture for foo_chrome
// summary: Expected TypeScript output fixture used by the HTML-to-wrapper test to verify the generated template for the foo_chrome case.
// ---

import {html} from 'chrome://resources/polymer/v3_0/polymer/polymer_bundled.min.js';
export function getTemplate() {
  return html`<!--_html_template_start_--><style>
  div {
    font-size: 2rem;
  }
</style>
<div>Hello world</div>
<!--_html_template_end_-->`;
}