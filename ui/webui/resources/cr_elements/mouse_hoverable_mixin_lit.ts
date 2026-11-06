// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview This file provides a mixin to manage a `hovered` style on mouse
 * events. Relies on listening for pointer events as touch devices may fire
 * mouse events too.
 */

// ---docerion
// type: source
// title: Mouse hoverable mixin for Lit elements
// summary: Mixin for Lit elements that toggles a hovered CSS class on pointer enter and removes it on pointer leave, only for mouse pointer devices.
// ---

import type {CrLitElement, PropertyValues} from '//resources/lit/v3_0/lit.rollup.js';

const HOVERED_STYLE: string = 'hovered';

type Constructor<T> = new (...args: any[]) => T;

export const MouseHoverableMixinLit = <T extends Constructor<CrLitElement>>(
    superClass: T): T => {
  class MouseHoverableMixinLit extends superClass {
    override firstUpdated(changedProperties: PropertyValues<this>) {
      super.firstUpdated(changedProperties);

      this.addEventListener('pointerenter', (e) => {
        const hostElement = e.currentTarget as HTMLElement;
        hostElement.classList.toggle(HOVERED_STYLE, e.pointerType === 'mouse');
      });

      this.addEventListener('pointerleave', (e) => {
        if (e.pointerType !== 'mouse') {
          return;
        }

        const hostElement = e.currentTarget as HTMLElement;
        hostElement.classList.remove(HOVERED_STYLE);
      });
    }
  }

  return MouseHoverableMixinLit;
};
