// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test browser proxy for access code cast tests
// summary: Provides a mock browser proxy with configurable add sink and cast results that records method calls for use in the WebUI test suites.
// ---

import type {AddSinkResultCode, CastDiscoveryMethod} from 'chrome://access-code-cast/access_code_cast.mojom-webui.js';
import {PageCallbackRouter} from 'chrome://access-code-cast/access_code_cast.mojom-webui.js';
import type {RouteRequestResultCode} from 'chrome://access-code-cast/route_request_result_code.mojom-webui.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

class TestAccessCodeCastBrowserProxy extends TestBrowserProxy {
  addResult: AddSinkResultCode;
  castResult: RouteRequestResultCode;
  castCallback: () => void;

  constructor (addResult: AddSinkResultCode, castResult: RouteRequestResultCode, castCallback: () => void) {
    super([
      'addSink',
      'castToSink',
    ]);

    this.addResult = addResult;
    this.castResult = castResult;
    this.castCallback = castCallback;
  }

  /** @override */
  addSink(accessCode: string, discoveryMethod: CastDiscoveryMethod) {
    this.methodCalled('addSink', {accessCode, discoveryMethod});
    return Promise.resolve({resultCode: this.addResult});
  }

  /** @override */
  castToSink() {
    this.castCallback();
    this.methodCalled('castToSink');
    return Promise.resolve({resultCode: this.castResult});
  }
}

export function createTestProxy(addResult:AddSinkResultCode, castResult: RouteRequestResultCode, castCallback: () => void) {
  const callbackRouter = new PageCallbackRouter();
  return {
    callbackRouter,
    callbackRouterRemote: callbackRouter.$.bindNewPipeAndPassRemote(),
    handler:
        new TestAccessCodeCastBrowserProxy(addResult, castResult, castCallback),
    async isQrScanningAvailable() {
      return Promise.resolve(true);
    },
    closeDialog() {},
    isDialog() {
      return true;
    },
    getDialogArgs() {
      return {};
    },
    isBarcodeApiAvailable() {
      return true;
    },
    isCameraAvailable() {
      return Promise.resolve(true);
    },
  };
}
