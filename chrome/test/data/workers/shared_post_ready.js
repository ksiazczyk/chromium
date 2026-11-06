// ---docerion
// type: test
// title: Shared worker post ready test script
// summary: Shared worker script that posts a ready message to the first connected port, used as test data for worker browser tests.
// ---

self.addEventListener("connect", (evt) => {
  evt.ports[0].postMessage("ready");
});
