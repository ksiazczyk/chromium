// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebView denied element registration
// summary: Registers <webview> as a denied guest view element so its use can be blocked where it is not allowed.
// ---

var registerDeniedElement = require('guestViewDeny').registerDeniedElement;

registerDeniedElement('WebView', 'webview');
