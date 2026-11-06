// ---docerion
// type: test
// title: Ready message worker script
// summary: Minimal worker script that posts a ready message to signal that the worker has started.
// ---

self.postMessage("ready");
