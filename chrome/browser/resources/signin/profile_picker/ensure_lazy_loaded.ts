// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lazy loading helper for profile picker modules
// summary: Loads the deferred lazy_load module once and resolves when the profile type choice and profile switch elements are defined.
// ---

import {getTrustedScriptURL} from 'chrome://resources/js/static_types.js';

let lazyLoadPromise: Promise<void>|null = null;

/**
 * @return Resolves when the lazy load module is imported.
 */
export function ensureLazyLoaded(): Promise<void> {
  if (!lazyLoadPromise) {
    const script = document.createElement('script');
    script.type = 'module';
    script.src = getTrustedScriptURL`./lazy_load.js`;
    document.body.appendChild(script);

    lazyLoadPromise = Promise
                          .all([
                            'profile-type-choice', 'profile-switch',
                          ].map(name => customElements.whenDefined(name)))
                          .then(() => {});
  }
  return lazyLoadPromise;
}
