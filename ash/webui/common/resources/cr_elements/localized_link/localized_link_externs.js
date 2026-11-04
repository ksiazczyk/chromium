// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/* Minimal externs file provided for places in the code that
 * still use JavaScript instead of TypeScript.
 * @externs
 */

// ---docerion
// type: source
// title: Closure externs for LocalizedLinkElement
// summary: Minimal externs declaring the LocalizedLinkElement constructor and its localizedString property for code that still uses JavaScript instead of TypeScript.
// ---

/**
 * @constructor
 * @extends {HTMLElement}
 */
function LocalizedLinkElement() {}

/** @type {string} */
LocalizedLinkElement.prototype.localizedString;
