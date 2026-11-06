// ---docerion
// type: test
// title: PAC test script with global state side effects (1)
// summary: Test fixture PAC script whose DNS lookups vary with a global iteration counter to test side-effect tracking across calls.
// ---

var g_iteration = 0;

function FindProxyForURL(url, host) {
  g_iteration++;

  var ips = [
    dnsResolve('host1'),
    dnsResolve('crazy' + g_iteration)
  ];

  alert('iteration: ' + g_iteration);

  return 'PROXY ' + ips.join('-') + '.test:100';
}
