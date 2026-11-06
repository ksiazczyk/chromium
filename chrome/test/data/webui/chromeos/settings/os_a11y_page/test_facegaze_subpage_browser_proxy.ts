// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: FaceGaze subpage browser proxy test double
// summary: Test double for the FaceGaze subpage browser proxy that records enable and gesture info toggle calls during tests.
// ---

import type {FaceGazeSubpageBrowserProxy} from 'chrome://os-settings/os_settings.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class TestFaceGazeSubpageBrowserProxy extends TestBrowserProxy implements
    FaceGazeSubpageBrowserProxy {
  constructor() {
    super([
      'requestEnableFaceGaze',
      'toggleGestureInfoForSettings',
    ]);
  }

  requestEnableFaceGaze(enable: boolean): void {
    this.methodCalled('requestEnableFaceGaze', [enable]);
  }

  toggleGestureInfoForSettings(enabled: boolean): void {
    this.methodCalled('toggleGestureInfoForSettings', [enabled]);
  }
}
