// Calls a bindings outside of FindProxyForURL(). This causes the code to
// get exercised during initialization.

// ---docerion
// type: test
// title: PAC test script calling bindings during initialization
// summary: PAC script that calls myIpAddress() at load time to exercise the bindings outside FindProxyForURL.
// ---

var x = myIpAddress();

function FindProxyForURL(url, host) {
  return "PROXY " + x + ":80";
}
