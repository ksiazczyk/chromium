// ---docerion
// type: test
// title: Shared worker fetch helper script
// summary: Shared worker test script that fetches URLs from port messages and posts the response status or error name back.
// ---

self.addEventListener('connect', (evt) => {
  const port = evt.ports[0];

  port.addEventListener('message', (event) => {
    fetch(event.data)
        .then((response) => port.postMessage({ok: response.ok}))
        .catch((error) => port.postMessage({error: error.name}));
  });
  port.start();

  port.postMessage('ready');
});
