// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension permission row element
// summary: Polymer element that toggles the visibility of permission details and manages focus between the details text and the show and hide buttons.
// ---

import {PolymerElement} from 'chrome://resources/polymer/v3_0/polymer/polymer_bundled.min.js';

import {getTemplate} from './extension_permission.html.js';

export class ExtensionPermission extends PolymerElement {
  static get is() {
    return 'extension-permission';
  }

  static get template() {
    return getTemplate();
  }

  static get properties() {
    return {
      permission: {type: String},
      detail: {type: String},
    };
  }

  declare permission: string;
  declare detail: string;

  showDetails() {
    this.setDetailsVisibility(true);
  }

  hideDetails() {
    this.setDetailsVisibility(false);
  }

  private getHtmlElement(query: string): HTMLElement|null {
    return this.shadowRoot!.querySelector<HTMLElement>(query);
  }

  setDetailsVisibility(isVisible: boolean) {
    this.getHtmlElement('#details')!.hidden = !isVisible;
    this.getHtmlElement('#hide-details')!.hidden = !isVisible;
    this.getHtmlElement('#show-details')!.hidden = isVisible;
    if (isVisible) {
      this.getHtmlElement('#details')!.focus();
    } else {
      this.getHtmlElement('#show-details')!.focus();
    }
  }
}

customElements.define(ExtensionPermission.is, ExtensionPermission);
