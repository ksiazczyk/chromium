// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Custom binding for the webrtcLoggingPrivate API.

// ---docerion
// type: source
// title: WebRTC Logging Private custom bindings
// summary: Custom binding for the webrtcLoggingPrivate API that binds the getLogsDirectory callback to the shared file entry directory callback helper.
// ---

const getBindDirectoryEntryCallback =
    require('fileEntryBindingUtil').getBindDirectoryEntryCallback;

apiBridge.registerCustomHook(function(binding, id, contextType) {
  const apiFunctions = binding.apiFunctions;
  apiFunctions.setCustomCallback(
      'getLogsDirectory', getBindDirectoryEntryCallback());
});
