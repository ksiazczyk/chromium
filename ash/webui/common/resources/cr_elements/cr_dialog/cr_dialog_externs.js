// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/* Minimal externs file provided for places in the code that
 * still use JavaScript instead of TypeScript.
 * @externs
 */

// ---docerion
// type: source
// title: CrDialogElement externs declarations
// summary: Provides minimal extern declarations for CrDialogElement so JavaScript code that still uses the dialog component can be type-checked.
// ---

/**
 * @constructor
 * @extends {HTMLElement}
 */
function CrDialogElement() {}

/** @type {boolean} */
CrDialogElement.prototype.open;

CrDialogElement.prototype.showModal = function() {};

CrDialogElement.prototype.cancel = function() {};

CrDialogElement.prototype.close = function() {};

/** @return {HTMLDialogElement} */
CrDialogElement.prototype.getNative = function() {};
