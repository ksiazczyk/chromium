// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Entry point initializing the Bluetooth internals UI
// summary: Entry point that initializes the Bluetooth internals views and checks system permissions on page load, skipping setup when a test flag is present.
// ---

import {checkSystemPermissions, initializeViews} from './bluetooth_internals.js';
import {BluetoothInternalsHandler} from './bluetooth_internals.mojom-webui.js';

document.addEventListener('DOMContentLoaded', () => {
  // Using a query of "isTest" provides a hook for the test suite to perform
  // setup actions before initializing the UI.
  const params = new URLSearchParams(window.location.search);
  const isTest = params.has('isTest');
  if (!isTest) {
    checkSystemPermissions(
        BluetoothInternalsHandler.getRemote(), initializeViews);
  }
});
