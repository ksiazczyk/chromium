// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Custom binding for the pdfViewerPrivate API.

// ---docerion
// type: source
// title: PDF Viewer Private API custom bindings
// summary: Custom renderer binding for the pdfViewerPrivate API that forwards getTextInfo font queries to native code with success and failure callbacks.
// ---

const pdfViewerPrivateNatives = requireNative('pdf_viewer_private');

apiBridge.registerCustomHook(function(bindingsAPI) {
  bindingsAPI.apiFunctions.setHandleRequest(
      'getTextInfo',
      function(textarea, knownFontIds, successCallback, failureCallback) {
        try {
          const fonts =
              pdfViewerPrivateNatives.GetTextInfo(textarea, knownFontIds);
          successCallback(fonts);
        } catch (e) {
          failureCallback(e.message || e.toString());
        }
      });
});
