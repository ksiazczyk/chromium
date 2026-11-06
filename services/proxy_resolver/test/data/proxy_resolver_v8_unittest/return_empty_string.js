// ---docerion
// type: test
// title: PAC script returning an empty string
// summary: Minimal PAC script whose FindProxyForURL returns an empty string, used to test handling of that return value.
// ---

function FindProxyForURL(url, host) {
  return "";
}

