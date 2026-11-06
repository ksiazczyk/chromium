// ---docerion
// type: test
// title: PAC test script with global state side effects (3)
// summary: Test fixture PAC script that resolves a growing list of hosts each iteration and returns the iteration count in the proxy string.
// ---

var g_iteration = 0;

function FindProxyForURL(url, host) {
  g_iteration++;

  var results = [];
  for (var i = 1; i <= g_iteration; ++i) {
    results.push('' + dnsResolve('host' + i));
  }

  alert('iteration: ' + g_iteration);
  return 'PROXY ' + results.join('-') + ':' + g_iteration;
}
