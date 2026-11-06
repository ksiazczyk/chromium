// ---docerion
// type: test
// title: Shared worker ready notifier
// summary: Shared worker script that posts a ready message on its port when a connection is made.
// ---

self.addEventListener("connect", (evt) => {
  evt.ports[0].postMessage("ready");
});
