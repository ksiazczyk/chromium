// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Extern for window.domAutomationController which is used in
 * browsertests.
 */

// ---docerion
// type: source
// title: DomAutomationController extern
// summary: Declares the window.domAutomationController extern used to send JSON results to the browser during browsertests.
// ---

/** @constructor */
function DomAutomationController() {}

/** @param {*} jsonObj */
DomAutomationController.prototype.send = function(jsonObj) {};

/** @type {DomAutomationController} */
window.domAutomationController;
