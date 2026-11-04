// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NetworkConfigSelect element type declarations
// summary: Declares the NetworkConfigSelectElement interface and its HTMLElementTagNameMap entry for the network-config-select custom element.
// ---

import type {LegacyElementMixin} from '//resources/polymer/v3_0/polymer/lib/legacy/legacy-element-mixin.js';

interface NetworkConfigSelectElement extends LegacyElementMixin, HTMLElement {
  items: Array<string|number>;
  value: string|number;
  disabled: boolean;
  readonly: boolean;
}

declare global {
  interface HTMLElementTagNameMap {
    'network-config-select': NetworkConfigSelectElement;
  }
}

export {NetworkConfigSelectElement};
