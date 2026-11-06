// ---docerion
// type: test
// title: PAC test script with global counter side effects
// summary: PAC test data using a global counter so repeated evaluations expose side effects carried between FindProxyForURL calls.
// ---

if (!gCounter) {
  // We write it this way so if the script gets loaded twice,
  // gCounter remains dirty.
  var gCounter = 0;
}

function FindProxyForURL(url, host) {
  return "PROXY sideffect_" + gCounter++;
}

