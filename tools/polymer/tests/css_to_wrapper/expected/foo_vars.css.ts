// ---docerion
// type: test
// title: Expected CSS variables wrapper
// summary: Expected css_to_wrapper output that applies CSS custom properties via an adopted stylesheet, including a dark mode media query.
// ---

import './other1.css.js';
import './other2.css.js';
export {};

const sheet = new CSSStyleSheet();
sheet.replaceSync(`
html {
  --my-var: 9px;
}

@media (prefers-color-scheme: dark) {
  html {
    --my-var: 10px;
  }
}`);
document.adoptedStyleSheets = [...document.adoptedStyleSheets, sheet];