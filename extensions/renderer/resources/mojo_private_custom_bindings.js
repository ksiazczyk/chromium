// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * Custom bindings for the mojoPrivate API.
 */

// ---docerion
// type: source
// title: Custom bindings for the mojoPrivate API
// summary: Custom bindings that add a requireAsync method to the mojoPrivate API, returning a promise for a required module's returnValue.
// ---

apiBridge.registerCustomHook(function(bindingsAPI) {
  let apiFunctions = bindingsAPI.apiFunctions;

  apiFunctions.setHandleRequest('requireAsync', function(moduleName) {
    return Promise.resolve(require(moduleName).returnValue);
  });
});
