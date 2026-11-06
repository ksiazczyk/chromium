// ---docerion
// type: test
// title: Service worker registration script for banner tests
// summary: Registers the isolated service worker at root scope via a Trusted Types policy, matching the isolated manifest scope.
// ---

const policy = trustedTypes.createPolicy('default', {
  createScriptURL: url => url,
});

navigator.serviceWorker.register(
  policy.createScriptURL('/banners/isolated/service_worker.js'),
  // Match the scope defined in manifest_isolated.json. To be able to
  // register the worker for this scope, the 'Service-Worker-Allowed' header
  // must be set to '/' on the service worker script.
  { scope: '/' }
);
