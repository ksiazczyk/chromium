// ---docerion
// type: test
// title: Shared worker ping-pong test script
// summary: Shared worker script that replies with pong on each connection, used by the workers UI test page.
// ---

var globalVar = 2011;
onconnect = function(e) {
  var port = e.ports[0];
  port.postMessage("pong");
}

