// ---docerion
// type: test
// title: PAC script returning a function
// summary: PAC script whose FindProxyForURL returns itself, used to test handling of a function as the return value.
// ---

function FindProxyForURL(url, host) {
  return FindProxyForURL;
}

