// ---docerion
// type: test
// title: Simple PAC test script
// summary: Minimal test fixture PAC script that returns a proxy using the request host on port 99.
// ---

function FindProxyForURL(url, host) {
  return "PROXY " + host + ":99";
}
