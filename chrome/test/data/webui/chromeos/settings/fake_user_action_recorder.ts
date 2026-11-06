// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Fake implementation of
 * ash.settings.mojom.UserActionRecorderRemote for testing.
 */

// ---docerion
// type: test
// title: Fake user action recorder for ChromeOS Settings tests
// summary: Fake implementation of the user action recorder mojo interface that counts page focus, blur, clicks, navigation, search, and setting change events in tests.
// ---

import type {userActionRecorderMojom} from 'chrome://os-settings/os_settings.js';

/**
 * Fake implementation of ash.settings.mojom.UserActionRecorderRemote.
 */
export class FakeUserActionRecorder implements
    userActionRecorderMojom.UserActionRecorderInterface {
  pageFocusCount = 0;
  pageBlurCount = 0;
  clickCount = 0;
  navigationCount = 0;
  searchCount = 0;
  settingChangeCount = 0;

  recordPageFocus(): void {
    ++this.pageFocusCount;
  }

  recordPageBlur(): void {
    ++this.pageBlurCount;
  }

  recordClick(): void {
    ++this.clickCount;
  }

  recordNavigation(): void {
    ++this.navigationCount;
  }

  recordSearch(): void {
    ++this.searchCount;
  }

  recordSettingChange(): void {
    ++this.settingChangeCount;
  }

  recordSettingChangeWithDetails(): void {
    ++this.settingChangeCount;
  }
}
