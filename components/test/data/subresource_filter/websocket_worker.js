// ---docerion
// type: test
// title: WebSocket worker test script
// summary: Web worker test script that imports websocket_connection.js and opens a WebSocket for the URL received in an incoming message.
// ---

self.importScripts('websocket_connection.js');
self.addEventListener('message', (e) => {
  connectWebSocketWithMessageCallback(e.data.url, self.postMessage);
});
