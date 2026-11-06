// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Registers a remote frame token associated to the frame ID. This
 * allows us to map page content world frames to isolated content world ones in
 * the browser layer.
 */

// Requires functions from child_frame_registration_lib.ts.

// ---docerion
// type: source
// title: Remote frame token registration
// summary: Registers a remote frame token on pageshow so the browser layer can map page content world frames to isolated content world frames after navigation.
// ---

import {registerSelfWithRemoteToken} from '//components/autofill/ios/form_util/resources/child_frame_registration_lib.js';
import {getOrCreateRemoteFrameToken} from '//components/autofill/ios/form_util/resources/fill_util.js';

function registerRemoteToken(): void {
  const remoteFrameToken = getOrCreateRemoteFrameToken();
  registerSelfWithRemoteToken(remoteFrameToken);
}


// Register a new token after the page is displayed due to navigation. The
// browser layer destroys existing WebFrame's on navigation which removes any
// registered frame tokens. That is why the frame must be registered again if
// the user navigates back to it.
addEventListener('pageshow', () => {
  registerRemoteToken();
});
