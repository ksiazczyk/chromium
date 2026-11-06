// ---docerion
// type: test
// title: PAC test script returning a proxy string with a zero-width space
// summary: PAC test data returning a proxy string containing a zero-width space (U+200B) to exercise unicode handling in proxy results.
// ---

// U+200B is the codepoint for zero-width-space.
function FindProxyForURL(url, host) {
  return "PROXY foo.com\u200B";
}
