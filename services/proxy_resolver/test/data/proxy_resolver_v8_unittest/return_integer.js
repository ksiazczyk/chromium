// ---docerion
// type: test
// title: PAC script returning an integer
// summary: PAC script whose FindProxyForURL returns 0, used to test handling of an integer return value.
// ---

function FindProxyForURL(url, host) {
  return 0;
}

