// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Custom binding for the pageAction API.

// ---docerion
// type: source
// title: Page Action API custom bindings
// summary: Custom renderer binding that wires the pageAction.setIcon handler to the shared set icon implementation.
// ---

const getSetIconHandler = require('setIcon').getSetIconHandler;

apiBridge.registerCustomHook(function(bindingsAPI) {
  const apiFunctions = bindingsAPI.apiFunctions;

  apiFunctions.setHandleRequest(
      'setIcon', getSetIconHandler('pageAction.setIcon'));
});
