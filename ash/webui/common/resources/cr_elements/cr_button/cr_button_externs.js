// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/* Minimal externs file provided for places in the code that
 * still use JavaScript instead of TypeScript.
 * @externs
 */

// ---docerion
// type: source
// title: CrButtonElement externs for JavaScript callers
// summary: Provides minimal Closure externs declaring CrButtonElement and its disabled property for code that still uses JavaScript instead of TypeScript.
// ---

/**
 * @constructor
 * @extends {HTMLElement}
 */
function CrButtonElement() {}

/** @type {boolean} */
CrButtonElement.prototype.disabled;
