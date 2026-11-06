// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Custom binding for the webrtcDesktopCapturePrivate API.

// ---docerion
// type: source
// title: WebRTC Desktop Capture Private custom bindings
// summary: Custom binding for the webrtcDesktopCapturePrivate API that tracks pending chooseDesktopMedia requests by ID and supports cancelling them.
// ---

const idGenerator = requireNative('id_generator');

apiBridge.registerCustomHook(function(bindingsAPI) {
  const apiFunctions = bindingsAPI.apiFunctions;

  const pendingRequests = {};

  function onRequestResult(id, result) {
    if (id in pendingRequests) {
      const callback = pendingRequests[id];
      delete pendingRequests[id];
      callback(result);
    }
  }

  apiFunctions.setHandleRequest(
      'chooseDesktopMedia', function(sources, request, callback) {
        const id = idGenerator.GetNextId();
        pendingRequests[id] = callback;
        bindingUtil.sendRequest(
            'webrtcDesktopCapturePrivate.chooseDesktopMedia',
            [id, sources, request, $Function.bind(onRequestResult, null, id)],
            undefined);
        return id;
      });

  apiFunctions.setHandleRequest('cancelChooseDesktopMedia', function(id) {
    if (id in pendingRequests) {
      delete pendingRequests[id];
      bindingUtil.sendRequest(
          'webrtcDesktopCapturePrivate.cancelChooseDesktopMedia', [id],
          undefined);
    }
  });
});
