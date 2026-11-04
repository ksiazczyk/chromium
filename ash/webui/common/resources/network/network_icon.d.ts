// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NetworkIcon element type declarations
// summary: Declares the NetworkIconElement class with networkState and isListItem properties and its HTMLElementTagNameMap entry.
// ---

import type {OncMojo} from '//resources/ash/common/network/onc_mojo.js';
import {PolymerElement} from '//resources/polymer/v3_0/polymer/polymer_bundled.min.js';

export class NetworkIconElement extends PolymerElement {
  networkState: OncMojo.NetworkStateProperties|undefined;
  isListItem: boolean;
}

declare global {
  interface HTMLElementTagNameMap {
    'network-icon': NetworkIconElement;
  }
}
