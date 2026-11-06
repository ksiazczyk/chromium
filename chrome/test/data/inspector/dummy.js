// ---docerion
// type: test
// title: Inspector test cookie helper script
// summary: Sets a viewsource cookie when called and is loaded by the inspector test page to exercise resource loading.
// ---

function setCookie() {
  document.cookie = 'viewsource_cookie=foo';
}
