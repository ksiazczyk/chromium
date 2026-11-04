// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Entry script for the confirm password change app
// summary: Imports the dialog element and exposes the $ element lookup helper on the window object so tests can inject JavaScript into the renderer.
// ---

import '/strings.m.js';
import './confirm_password_change.js';

import {$} from 'chrome://resources/ash/common/util.js';

function initialize() {
  // '$(id)' is an alias for 'document.getElementById(id)'. It is defined
  // in chrome://resources/ash/common/util.js. If this function is not exposed
  // via the global object, it would not be available to tests that inject
  // JavaScript directly into the renderer.
  Object.assign(window, {$: $});
}

initialize();
