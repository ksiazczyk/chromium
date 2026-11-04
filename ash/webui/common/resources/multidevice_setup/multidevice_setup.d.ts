// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Minimal TypeScript definitions to satisfy cases where
 * multidevice_setup.js is used from TypeScript files.
 */

// ---docerion
// type: source
// title: TypeScript definitions for multidevice_setup
// summary: Minimal TypeScript declarations for the multidevice-setup element, including its HTMLElementTagNameMap entry.
// ---

import {PolymerElement} from '//resources/polymer/v3_0/polymer/polymer_bundled.min.js';

export class MultiDeviceSetup extends PolymerElement {
  updateLocalizedContent(): void;
}

declare global {
  interface HTMLElementTagNameMap {
    'multidevice-setup': MultiDeviceSetup;
  }
}
