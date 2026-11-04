// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/* Minimal externs file provided for places in the code that
 * still use JavaScript instead of TypeScript.
 * @externs
 */

// ---docerion
// type: source
// title: Cellular setup page name externs
// summary: Closure externs declaring the CellularSetupPageName enum for code that still uses JavaScript instead of TypeScript.
// ---

/** @enum {string} */
const CellularSetupPageName = {
  ESIM_FLOW_UI: 'esim-flow-ui',
  PSIM_FLOW_UI: 'psim-flow-ui',
};
