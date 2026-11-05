// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Custom binding for the browserAction API.

// ---docerion
// type: source
// title: Custom bindings for the chrome.browserAction API
// summary: Custom binding for the browserAction API that handles setIcon and resolves openPopup callbacks to the extension's popup view.
// ---

const getSetIconHandler = require('setIcon').getSetIconHandler;
const getExtensionViews = requireNative('runtime').GetExtensionViews;

apiBridge.registerCustomHook(function(bindingsAPI) {
  const apiFunctions = bindingsAPI.apiFunctions;

  apiFunctions.setHandleRequest(
      'setIcon', getSetIconHandler('browserAction.setIcon'));

  apiFunctions.setCustomCallback('openPopup', function(callback, response) {
    if (!callback) {
      return;
    }

    if (bindingUtil.hasLastError()) {
      callback();
    } else {
      const views = getExtensionViews(-1, -1, 'POPUP');
      callback(views.length > 0 ? views[0] : null);
    }
  });
});
