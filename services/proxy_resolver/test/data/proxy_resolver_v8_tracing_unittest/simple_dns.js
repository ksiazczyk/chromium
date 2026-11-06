// ---docerion
// type: test
// title: Simple DNS PAC script for proxy resolver V8 tracing tests
// summary: PAC test fixture that calls myIpAddress and dnsResolve and returns a proxy result built from the resolved IP and an iteration counter.
// ---

var g_iteration = 0;

function FindProxyForURL(url, host) {
  g_iteration++;
  myIpAddress();
  var ip = dnsResolve(host);
  return "PROXY " + ip + '.test:' + g_iteration;
}
