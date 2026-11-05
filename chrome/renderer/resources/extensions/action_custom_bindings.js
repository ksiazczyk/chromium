// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Custom binding for the action API.

// ---docerion
// type: source
// title: Custom bindings for the chrome.action API
// summary: Registers a custom hook that routes the action.setIcon request through the shared setIcon handler.
// ---

const getSetIconHandler = require('setIcon').getSetIconHandler;

apiBridge.registerCustomHook(function(bindingsAPI) {
  const apiFunctions = bindingsAPI.apiFunctions;

  apiFunctions.setHandleRequest('setIcon', getSetIconHandler('action.setIcon'));
});
