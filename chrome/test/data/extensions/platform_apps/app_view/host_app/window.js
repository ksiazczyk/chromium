// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: AppView host app window script
// summary: Script that creates an appview element and connects it to a guest extension when the EMBED app command is received.
// ---

function addAppViewForExtensionId(guestExtensionId, callback) {
  var appview = document.createElement('appview');
  document.getElementById('embedder').appendChild(appview);
  appview.connect(guestExtensionId, {}, function(success) {
    callback(success);
  });
}

window.onAppCommand = function(cmd, param) {
  if (cmd === 'EMBED') {
    addAppViewForExtensionId(param, function(success) {});
  }
};
