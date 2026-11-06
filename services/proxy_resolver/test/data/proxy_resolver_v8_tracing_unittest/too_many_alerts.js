// ---docerion
// type: test
// title: Excessive alerts PAC script for proxy resolver V8 tracing tests
// summary: PAC test fixture that emits 50 alerts during FindProxyForURL to exercise the resolver's alert handling limits.
// ---

var g_iteration = 0;

function FindProxyForURL(url, host) {
  g_iteration++;

  dnsResolve(host);

  for (var i = 0; i < 50; i++) {
    alert('Gee, all these alerts are silly!');
  }

  return "PROXY foo:" + g_iteration;
}
