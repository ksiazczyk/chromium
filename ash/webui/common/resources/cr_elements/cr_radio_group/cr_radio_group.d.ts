// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr_radio_group.d.ts
// summary: TypeScript declarations for the cr-radio-group element, exposing disabled, selected and selectableElements properties and registering it in HTMLElementTagNameMap.
// ---

import type {LegacyElementMixin} from '//resources/polymer/v3_0/polymer/lib/legacy/legacy-element-mixin.js';

interface CrRadioGroupElement extends LegacyElementMixin, HTMLElement {
  disabled: boolean;
  selected: string;
  selectableElements: string;
}

export {CrRadioGroupElement};

declare global {
  interface HTMLElementTagNameMap {
    'cr-radio-group': CrRadioGroupElement;
  }
}
