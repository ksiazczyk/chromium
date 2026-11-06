// ---docerion
// type: test
// title: Request origin test service worker
// summary: Service worker for the request origin test that imports empty.js and fetches empty.html.
// ---

// The service worker for the request origin test.
importScripts('empty.js');
fetch('empty.html');
