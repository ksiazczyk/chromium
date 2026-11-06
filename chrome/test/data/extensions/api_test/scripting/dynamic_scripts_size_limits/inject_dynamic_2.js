// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dynamic content script injection test 2
// summary: Injects a div with id dynamic-2 into the page so tests can verify dynamically registered content scripts are executed.
// ---

var div = document.createElement('div');  // eslint-disable-line no-var
div.id = 'dynamic-2';
document.body.appendChild(div);
