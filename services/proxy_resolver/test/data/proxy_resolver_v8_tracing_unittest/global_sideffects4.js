// ---docerion
// type: test
// title: PAC test script with global state side effects (4)
// summary: Test fixture PAC script that repeatedly queries the local IP address before resolving a host tied to the iteration count.
// ---

var g_iteration = 0;

function FindProxyForURL(url, host) {
  g_iteration++;

  for (var i = 0; i < g_iteration; ++i) {
    myIpAddress();
  }

  var result = '' + dnsResolve('host' + g_iteration);
  result += g_iteration;

  alert('iteration: ' + g_iteration);
  return 'PROXY ' + result + ':34';
}
