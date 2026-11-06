// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Custom bindings for the feedbackPrivate API.

// ---docerion
// type: source
// title: Custom bindings for the feedbackPrivate API
// summary: Custom bindings that convert attached file and screenshot blobs into blob UUIDs before sending feedback through the feedbackPrivate API.
// ---

var blobNatives = requireNative('blob_natives');

apiBridge.registerCustomHook(function(bindingsAPI) {
  var apiFunctions = bindingsAPI.apiFunctions;
  apiFunctions.setUpdateArgumentsPostValidate(
      'sendFeedback',
      function(feedbackInfo, loadSystemInfo, formOpenTime, callback) {
        var attachedFileBlobUuid = '';
        var screenshotBlobUuid = '';

        if (feedbackInfo.attachedFile)
          attachedFileBlobUuid =
              blobNatives.GetBlobUuid(feedbackInfo.attachedFile.data);
        if (feedbackInfo.screenshot)
          screenshotBlobUuid = blobNatives.GetBlobUuid(feedbackInfo.screenshot);

        feedbackInfo.attachedFileBlobUuid = attachedFileBlobUuid;
        feedbackInfo.screenshotBlobUuid = screenshotBlobUuid;

        return [feedbackInfo, loadSystemInfo, formOpenTime, callback];
      });
});
