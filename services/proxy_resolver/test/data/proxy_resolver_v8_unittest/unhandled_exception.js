// ---docerion
// type: test
// title: PAC test script that throws an unhandled runtime exception
// summary: PAC test data referencing an undefined variable to trigger an unhandled runtime exception during proxy resolution.
// ---

function FindProxyForURL(url, host) {
  // This will throw a runtime exception.
  return "PROXY x" + undefined_variable;
}

