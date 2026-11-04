// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Navigation selector element type declarations
// summary: TypeScript declarations for the navigation-selector element, describing the SelectorItem interface and its properties and methods.
// ---

import type {LegacyElementMixin} from 'chrome://resources/polymer/v3_0/polymer/lib/legacy/legacy-element-mixin.js';

export interface SelectorItem {
  name: string;
  pageIs: string;
  icon: string;
  initialData?: object;
  id: string;
}

interface NavigationSelectorElement extends LegacyElementMixin, HTMLElement {
  selectedItem: SelectorItem;
  selectorItems: SelectorItem[];
  onSelected_(e: EventTarget): void;
  selectedItemChanged_(): void;
  updateSelected_(items: NodeListOf<HTMLDivElement>): void;
  getIcon_(item: SelectorItem): string;
  computeInitialClass_(item: SelectorItem): string;
}

export {NavigationSelectorElement};

declare global {
  interface HTMLElementTagNameMap {
    'navigation-selector': NavigationSelectorElement;
  }
}