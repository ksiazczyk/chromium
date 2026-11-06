// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Navigation listener to report hash change.
 */

// ---docerion
// type: source
// title: Hash change navigation listener
// summary: JavaScript listener that reports hashchange events to the native code through the NavigationEventMessage handler.
// ---

import {gCrWeb} from '//ios/web/public/js_messaging/resources/gcrweb.js';
import {sendWebKitMessage} from '//ios/web/public/js_messaging/resources/utils.js';

window.addEventListener('hashchange', () => {
  sendWebKitMessage(
      'NavigationEventMessage',
      {'command': 'hashchange', 'frame_id': gCrWeb.getFrameId()});
});
