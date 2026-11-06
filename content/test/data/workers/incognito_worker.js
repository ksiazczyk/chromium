// ---docerion
// type: test
// title: Incognito shared worker connect counter
// summary: Shared worker script that counts connect events and posts the incremented count to each connected port.
// ---

var count = 0;

onconnect = function(event) {
  event.ports[0].postMessage(++count);
};
