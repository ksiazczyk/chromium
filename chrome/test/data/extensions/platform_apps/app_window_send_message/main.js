// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: App window send message test main script
// summary: Creates an iframe pointing to a data URL when the test app window loads.
// ---

window.onload = function() {
  var iframe = document.createElement('iframe');
  iframe.src = 'data:text/html,<body>hello world.</body>';
  document.body.appendChild(iframe);
};
