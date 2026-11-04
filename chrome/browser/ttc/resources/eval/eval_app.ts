// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EvalAppElement Lit custom element
// summary: Defines the ttc-eval-app Lit element that connects to the eval proxy and installs the TTC eval test API on page load.
// ---

import '/strings.m.js';

import {CrLitElement} from '//resources/lit/v3_0/lit.rollup.js';

import {EvalProxy} from './eval_proxy.js';
import {TtcEvalApi} from './ttc_eval_api.js';

export class EvalAppElement extends CrLitElement {
  static get is() {
    return 'ttc-eval-app';
  }

  private evalProxy_: EvalProxy = EvalProxy.getInstance();
  private testApi_: TtcEvalApi =
      new TtcEvalApi(this.evalProxy_.handler, this.evalProxy_.callbackRouter);

  override connectedCallback() {
    super.connectedCallback();
    this.testApi_.install();
  }
}

declare global {
  interface HTMLElementTagNameMap {
    'ttc-eval-app': EvalAppElement;
  }
}

customElements.define(EvalAppElement.is, EvalAppElement);
