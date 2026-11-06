// ---docerion
// type: test
// title: Worker fetcher test script
// summary: Worker script that fetches the URL from an incoming message and posts back whether the response was ok or the error name.
// ---

self.addEventListener('message', (event) => {
  console.log('Fetching', event.data);
  fetch(event.data)
      .then((response) => self.postMessage({ok: response.ok}))
      .catch((error) => self.postMessage({error: error.name}));
});
