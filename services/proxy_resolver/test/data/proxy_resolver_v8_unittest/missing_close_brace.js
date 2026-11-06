// This PAC script is invalid, because there is a missing close brace
// on the function FindProxyForURL().

// ---docerion
// type: test
// title: Invalid PAC test script with missing closing brace
// summary: Deliberately malformed PAC script missing the closing brace of FindProxyForURL, used to test error handling.
// ---

function FindProxyForURL(url, host) {
  return "DIRECT";

