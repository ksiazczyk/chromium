// ---docerion
// type: test
// title: PAC test script for failing DNS resolution
// summary: PAC script verifying the expected return values of DNS-related bindings in an environment where all DNS resolution fails.
// ---

// This script should be run in an environment where all DNS resolution are
// failing. It tests that functions return the expected values.
//
// Returns "PROXY success:80" on success.
function FindProxyForURL(url, host) {
  try {
    expectEq("127.0.0.1", myIpAddress());
    expectEq("", myIpAddressEx());

    expectEq(null, dnsResolve("not-found"));
    expectEq("", dnsResolveEx("not-found"));

    expectEq(false, isResolvable("not-found"));
    expectEq(false, isResolvableEx("not-found"));

    return "PROXY success:80";
  } catch(e) {
    alert(e);
    return "PROXY failed:80";
  }
}

function expectEq(expected, actual) {
  if (expected != actual)
    throw "Expected " + expected + " but was " + actual;
}

