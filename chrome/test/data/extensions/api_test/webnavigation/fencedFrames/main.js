// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe embedding script
// summary: Embeds iframe.html in an iframe on page load to set up the nested frame navigation under test.
// ---

onload = function() {
  const f = document.createElement('iframe');
  f.src = 'iframe.html';
  document.body.appendChild(f);
};
