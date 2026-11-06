// ---docerion
// type: test
// title: Expected native template wrapper for foo
// summary: Expected wrapper output exporting a getTemplate function that returns a trusted HTML template without Polymer or Lit, for the html_to_wrapper test.
// ---

import {getTrustedHTML} from '//resources/js/static_types.js';
export function getTemplate() {
  return getTrustedHTML`<!--_html_template_start_--><style>
  div {
    font-size: 2rem;
  }
</style>
<div>Hello world</div>
<!--_html_template_end_-->`;
}