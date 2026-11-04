// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview ensureLazyLoaded() will dynamically add the lazy_load.js
 * script to the DOM, which will subsequently load all subpages.
 */

// ---docerion
// type: source
// title: Ensure lazy loading of settings subpages
// summary: Exports ensureLazyLoaded(), which injects the lazy_load.js module script into the DOM so all ChromeOS Settings subpages load on demand.
// ---

import {getTrustedScriptURL} from 'chrome://resources/js/static_types.js';

let lazyLoadPromise: Promise<void>|null = null;

/**
 * @return A promise that resolves when the lazy load module is loaded.
 */
export function ensureLazyLoaded(): Promise<void> {
  if (!lazyLoadPromise) {
    const script = document.createElement('script');
    script.type = 'module';
    script.src = getTrustedScriptURL`./lazy_load.js`;
    document.body.appendChild(script);

    lazyLoadPromise = new Promise<void>((resolve) => {
      script.onload = () => {
        resolve();
      };
    });
  }
  return lazyLoadPromise;
}
