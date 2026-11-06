// ---docerion
// type: test
// title: Minimal PAC test script returning DIRECT
// summary: Trivial PAC script whose FindProxyForURL always returns DIRECT, serving as a baseline test case.
// ---

function FindProxyForURL(url, host) {
  return "DIRECT";
}

