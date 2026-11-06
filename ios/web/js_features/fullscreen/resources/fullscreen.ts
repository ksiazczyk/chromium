// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Reports viewport details to the app.
 */

// ---docerion
// type: source
// title: Fullscreen viewport reporting script
// summary: TypeScript script for the iOS fullscreen feature that reads the viewport meta tag and reports viewport-fit cover status and changes to the app via a MutationObserver.
// ---

import {gCrWeb} from '//ios/web/public/js_messaging/resources/gcrweb.js';
import {sendWebKitMessage} from '//ios/web/public/js_messaging/resources/utils.js';

/**
 * Reads the viewport configuration and reports it back to the browser.
 */
function reportViewportConfiguration() {
  const viewportMeta = window.document.querySelector('meta[name = "viewport"]');
  const coverValue =
      viewportMeta?.getAttribute('content')?.includes('viewport-fit=cover');
  sendWebKitMessage('FullscreenViewportHandler', {
    'frame_id': gCrWeb.getFrameId(),
    'cover': !!coverValue,
  });
}

/**
 * Initializes the MutationObserver to track viewport meta tag changes.
 */
function initializeMutationObserver() {
  const observer = new MutationObserver(() => {
    reportViewportConfiguration();
  });

  const config = {
    attributes: true,
    childList: true,
    subtree: true,
    attributeFilter: ['content', 'name'],
  };

  observer.observe(document.head, config);
}

window.addEventListener('load', () => {
  reportViewportConfiguration();
  initializeMutationObserver();
});
