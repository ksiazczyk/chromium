// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/* Minimal externs file provided for places in the code that
 * still use JavaScript instead of TypeScript.
 * @externs
 */

// ---docerion
// type: source
// title: CrDrawerElement externs for JavaScript callers
// summary: Provides a minimal Closure externs declaration of the cr-drawer API for code that still uses JavaScript instead of TypeScript.
// ---

/**
 * @constructor
 * @extends {HTMLElement}
 */
function CrDrawerElement() {}

CrDrawerElement.prototype.cancel = function() {};
CrDrawerElement.prototype.openDrawer = function() {};
CrDrawerElement.prototype.wasCanceled = function() {};
