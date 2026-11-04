// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Network property list element type declarations
// summary: TypeScript declarations for the network-property-list-mojo element, exposing its disabled and fields properties in the element tag map.
// ---

import type {LegacyElementMixin} from '//resources/polymer/v3_0/polymer/lib/legacy/legacy-element-mixin.js';

interface NetworkPropertyListMojoElement extends LegacyElementMixin,
                                                 HTMLElement {
  disabled: boolean;
  fields: string[];
}

declare global {
  interface HTMLElementTagNameMap {
    'network-property-list-mojo': NetworkPropertyListMojoElement;
  }
}

export {NetworkPropertyListMojoElement};
