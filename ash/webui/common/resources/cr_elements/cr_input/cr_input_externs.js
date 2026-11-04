// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/* Minimal externs file provided for places in the code that
 * still use JavaScript instead of TypeScript.
 * @externs
 */

// ---docerion
// type: source
// title: cr-input externs for JavaScript callers
// summary: Declares a minimal CrInputElement externs API so JavaScript code that still uses the element can be type-checked.
// ---

/**
 * @constructor
 * @extends {HTMLElement}
 */
function CrInputElement() {}

/** @type {string} */
CrInputElement.prototype.ariaLabel;

/** @type {boolean} */
CrInputElement.prototype.invalid;

/** @type {number} */
CrInputElement.prototype.maxlength;

/** @type {string} */
CrInputElement.prototype.value;

/** @type {!HTMLInputElement} */
CrInputElement.prototype.inputElement;

CrInputElement.prototype.focusInput = function() {};

/**
 * @param {number=} start
 * @param {number=} end
 */
CrInputElement.prototype.select = function(start, end) {};

/** @return {boolean} */
CrInputElement.prototype.validate = function() {};
