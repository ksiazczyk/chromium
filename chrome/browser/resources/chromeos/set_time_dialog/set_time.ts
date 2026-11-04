// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview
 * Main entry point for the set time dialog
 */

// ---docerion
// type: source
// title: Set time dialog page entry point
// summary: Entry point script that imports the dialog component and starts the color change updater when the page loads.
// ---

import '/strings.m.js';
import './set_time_dialog.js';

import {ColorChangeUpdater} from 'chrome://resources/cr_components/color_change_listener/colors_css_updater.js';

window.onload = () => {
  ColorChangeUpdater.forDocument().start();
};
