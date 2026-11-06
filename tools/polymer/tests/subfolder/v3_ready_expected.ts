// ---docerion
// type: test
// title: v3_ready_expected.ts expected output
// summary: Expected TypeScript result with the v3_ready HTML inlined between the html template start and end markers.
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
