// ---docerion
// type: test
// title: Hello world JavaScript test fixture
// summary: JavaScript that appends a div containing Hello, World! to the page, serving as test data in the DevTools indexer test directory.
// ---

+// Copyright 2017 The Chromium Authors
+// Use of this source code is governed by a BSD-style license that can be
+// found in the LICENSE file.

function hello_world() {
  var div = document.createElement('div');
  document.body.appendChild(div);
  div.textContent = 'Hello, World!';
}

hello_world();
