// ---docerion
// type: test
// title: WebSocket connectivity check worker
// summary: Worker script that opens a WebSocket to echo-with-no-extension and posts PASS or FAIL back to the page depending on the connection result.
// ---

onmessage = () => {
  var protocol = location.protocol.replace('http', 'ws');
  var url = protocol + '//' + location.host + '/echo-with-no-extension';
  var ws = new WebSocket(url);

  ws.onopen = () => postMessage('PASS');
  ws.onclose = () => postMessage('FAIL');
}
