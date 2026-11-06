// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AppView denied element registration
// summary: Registers the AppView element as a denied appview element via the guestViewDeny module so it is handled as unavailable.
// ---

var registerDeniedElement = require('guestViewDeny').registerDeniedElement;

registerDeniedElement('AppView', 'appview');
