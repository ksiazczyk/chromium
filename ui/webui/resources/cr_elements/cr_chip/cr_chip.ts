// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr-chip web component
// summary: Defines the CrChipElement Lit custom element, a chip button with ripple support and disabled, selected and ARIA properties.
// ---

import {CrLitElement} from '//resources/lit/v3_0/lit.rollup.js';

import {CrRippleMixin} from '../cr_ripple/cr_ripple_mixin.js';

import {getCss} from './cr_chip.css.js';
import {getHtml} from './cr_chip.html.js';

const CrChipElementBase = CrRippleMixin(CrLitElement);

export interface CrChipElement {
  $: {
    button: HTMLButtonElement,
  };
}

export class CrChipElement extends CrChipElementBase {
  static get is() {
    return 'cr-chip';
  }

  static override get styles() {
    return getCss();
  }

  override render() {
    return getHtml.bind(this)();
  }

  static override get properties() {
    return {
      disabled: {type: Boolean},
      chipAriaLabel: {type: String},
      chipRole: {type: String},
      selected: {type: Boolean, reflect: true},
    };
  }

  accessor disabled: boolean = false;
  accessor chipAriaLabel: string = '';
  accessor chipRole: string = '';
  accessor selected: boolean = false;

  constructor() {
    super();
    this.ensureRippleOnPointerdown();
  }

  // Overridden from CrRippleMixin
  override createRipple() {
    this.rippleContainer = this.shadowRoot.querySelector('button');
    return super.createRipple();
  }
}

declare global {
  interface HTMLElementTagNameMap {
    'cr-chip': CrChipElement;
  }
}

customElements.define(CrChipElement.is, CrChipElement);
