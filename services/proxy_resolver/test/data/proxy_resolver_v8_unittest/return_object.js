// ---docerion
// type: test
// title: PAC script returning an object
// summary: PAC script whose FindProxyForURL returns an object, used to test handling of an object as the return value.
// ---

function FindProxyForURL(url, host) {
  return {result: "PROXY foo"};
}

