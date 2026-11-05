// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Custom binding for the image writer private API.

// ---docerion
// type: source
// title: imageWriterPrivate custom bindings
// summary: Custom binding for the image writer private API that rewrites writeFromFile arguments from a file entry into file system name and relative path values.
// ---

apiBridge.registerCustomHook(function(bindingsAPI) {
  const apiFunctions = bindingsAPI.apiFunctions;

  apiFunctions.setUpdateArgumentsPostValidate(
      'writeFromFile', function(device, fileEntry, callback) {
        const fileSystemName = fileEntry.filesystem.name;
        const relativePath = $String.slice(fileEntry.fullPath, 1);
        return [device, fileSystemName, relativePath, callback];
      });
});
