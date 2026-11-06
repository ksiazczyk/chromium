// ---docerion
// type: test
// title: Expected Lit html wrapper for foo
// summary: Expected wrapper output exporting a getHtml function that returns a Lit template with a custom element binding, typed against FooLitElement.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';
import type {FooLitElement} from './foo_lit.js';

export function getHtml(this: FooLitElement) {
  return html`<!--_html_template_start_--><div>Hello world</div>
<my-custom-element .someProperty="foo"></my-custom-element>
<!--_html_template_end_-->`;
}