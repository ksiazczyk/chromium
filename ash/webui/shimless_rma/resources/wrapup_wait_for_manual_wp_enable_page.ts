// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wrap-up manual write protection enable page element
// summary: Defines the wrapup-wait-for-manual-wp-enable-page element that waits for manual hardware write protection to be enabled before transitioning.
// ---

import './shimless_rma_shared.css.js';
import './base_page.js';

import {I18nMixin} from 'chrome://resources/ash/common/cr_elements/i18n_mixin.js';
import {PolymerElement} from 'chrome://resources/polymer/v3_0/polymer/polymer_bundled.min.js';

import {getShimlessRmaService} from './mojo_interface_provider.js';
import type {ShimlessRmaServiceInterface} from './shimless_rma.mojom-webui.js';
import {HardwareWriteProtectionStateObserverReceiver} from './shimless_rma.mojom-webui.js';
import {executeThenTransitionState, focusPageTitle} from './shimless_rma_util.js';
import {getTemplate} from './wrapup_wait_for_manual_wp_enable_page.html.js';

/**
 * @fileoverview
 * 'wrapup-wait-for-manual-wp-enable-page' wait for the manual HWWP enable to be
 * completed.
 */

const WrapupWaitForManualWpEnablePageBase = I18nMixin(PolymerElement);

export class WrapupWaitForManualWpEnablePage extends
    WrapupWaitForManualWpEnablePageBase {
  static get is() {
    return 'wrapup-wait-for-manual-wp-enable-page' as const;
  }

  static get template() {
    return getTemplate();
  }

  private shimlessRmaService: ShimlessRmaServiceInterface =
      getShimlessRmaService();
  // Receiver responsible for observing hardware write protection state.
  hardwareWriteProtectionStateObserverReceiver:
      HardwareWriteProtectionStateObserverReceiver =
          new HardwareWriteProtectionStateObserverReceiver(this);

  constructor() {
    super();

    this.shimlessRmaService.observeHardwareWriteProtectionState(
        this.hardwareWriteProtectionStateObserverReceiver.$
            .bindNewPipeAndPassRemote());
  }

  override ready() {
    super.ready();

    focusPageTitle(this);
  }

  onHardwareWriteProtectionStateChanged(enabled: boolean): void {
    if (enabled) {
      executeThenTransitionState(
          this, () => this.shimlessRmaService.writeProtectManuallyEnabled());
    }
  }
}

declare global {
  interface HTMLElementTagNameMap {
    [WrapupWaitForManualWpEnablePage.is]: WrapupWaitForManualWpEnablePage;
  }
}

customElements.define(
    WrapupWaitForManualWpEnablePage.is, WrapupWaitForManualWpEnablePage);
