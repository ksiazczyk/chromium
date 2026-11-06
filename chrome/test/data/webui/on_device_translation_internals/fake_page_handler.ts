// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake page handler for on-device translation internals tests
// summary: Test double implementing PageHandlerInterface that records install and uninstall language package calls made during WebUI tests.
// ---

import type {PageHandlerInterface} from 'chrome://on-device-translation-internals/on_device_translation_internals.mojom-webui.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class FakePageHandler extends TestBrowserProxy implements
    PageHandlerInterface {
  constructor() {
    super([
      'installLanguagePackage',
      'uninstallLanguagePackage',
    ]);
  }

  installLanguagePackage(packageIndex: number) {
    this.methodCalled('installLanguagePackage', packageIndex);
  }

  uninstallLanguagePackage(packageIndex: number) {
    this.methodCalled('uninstallLanguagePackage', packageIndex);
  }
}
