// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview A shared library for clipboard features. This file should be
 * imported by other clipboard-related scripts.
 */

// ---docerion
// type: source
// title: Shared clipboard utility library
// summary: Shared helper library for clipboard-related scripts that notifies the native ClipboardHandler when a clipboard read has finished.
// ---

import {gCrWeb} from '//ios/web/public/js_messaging/resources/gcrweb.js';
import {sendWebKitMessage} from '//ios/web/public/js_messaging/resources/utils.js';

/**
 * Sends a message to the browser that a clipboard read has finished.
 */
export function sendDidFinishClipboardReadMessage() {
  sendWebKitMessage('ClipboardHandler', {
    'frameId': gCrWeb.getFrameId(),
    'command': 'didFinishClipboardRead',
  });
}
