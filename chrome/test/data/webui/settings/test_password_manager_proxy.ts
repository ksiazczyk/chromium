// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @fileoverview Test implementation of PasswordManagerProxy. */

// ---docerion
// type: test
// title: Test password manager proxy
// summary: Fake PasswordManagerProxy that records passwords page access and showPasswordManager calls in settings tests.
// ---

// clang-format off
import type {PasswordManagerProxy, PasswordManagerPage} from 'chrome://settings/settings.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

// clang-format on

/**
 * Test implementation
 */
export class TestPasswordManagerProxy extends TestBrowserProxy implements
    PasswordManagerProxy {
  constructor() {
    super([
      'recordPasswordsPageAccessInSettings',
      'showPasswordManager',
    ]);
  }

  recordPasswordsPageAccessInSettings() {
    this.methodCalled('recordPasswordsPageAccessInSettings');
  }

  showPasswordManager(page: PasswordManagerPage) {
    this.methodCalled('showPasswordManager', page);
  }
}
