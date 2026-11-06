// ---docerion
// type: test
// title: PAC test script resolving DNS during initialization
// summary: Test fixture PAC script that performs DNS lookups at load time and again per request to check they do not share a resolution cache.
// ---

var g_ips = [
  dnsResolve('host1'),
  dnsResolve('host2')
];

alert('Watsup');
alert('Watsup2');

function FindProxyForURL(url, host) {
  // Note that host1 and host2 should not resolve using the same cache as was
  // used for g_ips!
  var ips = g_ips.concat([dnsResolve('host1'), dnsResolve('host2')]);
  return 'PROXY ' + ips.join('-') + '.test:99';
}
