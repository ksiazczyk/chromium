// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Account manager error screen Polymer element
// summary: Defines the account-manager-error-screen Polymer element that displays an error icon, an error title, and body content.
// ---

import 'chrome://resources/ash/common/cr_elements/cr_shared_vars.css.js';
import 'chrome://resources/ash/common/cr_elements/icons.html.js';

import {Polymer} from 'chrome://resources/polymer/v3_0/polymer/polymer_bundled.min.js';

import {getTemplate} from './error_screen.html.js';

/**
 * @fileoverview Polymer element for displaying error screens with error icon,
 * title and body text.
 */

Polymer({
  is: 'account-manager-error-screen',

  _template: getTemplate(),

  properties: {
    errorTitle: {
      type: String,
      value: '',
    },
  },
});
