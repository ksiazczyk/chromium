// ---docerion
// type: test
// title: foo_style.css.ts expected output
// summary: Expected output fixture for the CSS-to-wrapper test, registering a dom-module style that includes other style modules and defines custom properties with calc expressions.
// ---

import {html} from 'chrome://resources/polymer/v3_0/polymer/polymer_bundled.min.js';
import './other1.css.js';
import './other2.css.js';

const styleMod = document.createElement('dom-module');
styleMod.appendChild(html`
  <template>
    <style include="other1 other2">
div {
  font-size: 2rem;
  --foo-bar: calc(var(--foo-bar1)
      - var(--foo-bar2)
      - 3 * var(--foo-bar3));
}
    </style>
  </template>
`.content);
styleMod.register('foo-style');