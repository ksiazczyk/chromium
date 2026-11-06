// ---docerion
// type: test
// title: PAC script returning null
// summary: PAC script whose FindProxyForURL returns null, used to test handling of a null return value.
// ---

function FindProxyForURL(url, host) {
  return null;
}

