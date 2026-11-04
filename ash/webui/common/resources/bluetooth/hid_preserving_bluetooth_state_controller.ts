// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HID-preserving Bluetooth state controller accessor
// summary: Wraps access to the HidPreservingBluetoothStateController Mojo remote and allows injecting a fake implementation for tests.
// ---

import type {HidPreservingBluetoothStateControllerInterface} from './hid_preserving_bluetooth_state_controller.mojom-webui.js';
import {HidPreservingBluetoothStateController} from './hid_preserving_bluetooth_state_controller.mojom-webui.js';

/**
 * @fileoverview
 * Wrapper for HidPreservingBluetoothStateController that provides the ability
 * to inject a fake HidPreservingBluetoothStateController implementation for
 * tests.
 */

let hidPreservingController: HidPreservingBluetoothStateControllerInterface|
    undefined;

export function setHidPreservingControllerForTesting(
    testHidPreservingController?:
        HidPreservingBluetoothStateControllerInterface): void {
  hidPreservingController = testHidPreservingController;
}

export function getHidPreservingController():
    HidPreservingBluetoothStateControllerInterface {
  if (hidPreservingController) {
    return hidPreservingController;
  }

  hidPreservingController = HidPreservingBluetoothStateController.getRemote();
  return hidPreservingController;
}
