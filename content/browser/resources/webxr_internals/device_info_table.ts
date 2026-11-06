// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Device info table web component
// summary: Custom element that adds property and value rows to the device info table.
// ---

import {CustomElement} from 'chrome://resources/js/custom_element.js';

import {getTemplate} from './device_info_table.html.js';

export class DeviceInfoTableElement extends CustomElement {
  static override get template() {
    return getTemplate();
  }

  addRow(property: string, value: string) {
    const table =
        this.getRequiredElement<HTMLTableElement>('#device-info-table');

    const newRow = table.insertRow();
    const propertyCell = newRow.insertCell();
    const valueCell = newRow.insertCell();

    propertyCell.textContent = property;
    valueCell.textContent = value;
  }
}

// Declare the custom element
declare global {
  interface HTMLElementTagNameMap {
    'device-info-table': DeviceInfoTableElement;
  }
}

customElements.define('device-info-table', DeviceInfoTableElement);
