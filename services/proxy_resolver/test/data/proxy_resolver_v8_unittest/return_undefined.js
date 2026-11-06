// ---docerion
// type: test
// title: PAC test script that returns undefined from FindProxyForURL
// summary: PAC test data whose FindProxyForURL returns undefined, used to verify the V8 proxy resolver handles undefined return values.
// ---

function FindProxyForURL(url, host) {
  return undefined;
}

