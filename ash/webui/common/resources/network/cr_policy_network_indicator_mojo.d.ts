// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Type declarations for cr-policy-network-indicator-mojo
// summary: TypeScript declarations registering the cr-policy-network-indicator-mojo custom element in the HTMLElementTagNameMap.
// ---

import type {LegacyElementMixin} from '//resources/polymer/v3_0/polymer/lib/legacy/legacy-element-mixin.js';

export interface CrPolicyNetworkIndicatorMojoElement extends
    HTMLElement, LegacyElementMixin {}

declare global {
  interface HTMLElementTagNameMap {
    'cr-policy-network-indicator-mojo': CrPolicyNetworkIndicatorMojoElement;
  }
}
