// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Accessibility browser proxy for settings
// summary: Browser proxy interface and implementation for accessibility settings actions such as opening trackpad gestures settings, recording metrics, and querying screen reader state.
// ---

import {sendWithPromise} from 'chrome://resources/js/cr.js';

export interface AccessibilityBrowserProxy {
  openTrackpadGesturesSettings(): void;
  recordOverscrollHistoryNavigationChanged(enabled: boolean): void;
  getScreenReaderState(): Promise<boolean>;
}

export class AccessibilityBrowserProxyImpl implements
    AccessibilityBrowserProxy {
  openTrackpadGesturesSettings() {
    chrome.send('openTrackpadGesturesSettings');
  }

  recordOverscrollHistoryNavigationChanged(enabled: boolean) {
    chrome.metricsPrivate.recordBoolean(
        'Settings.OverscrollHistoryNavigation.Enabled', enabled);
  }

  getScreenReaderState() {
    return sendWithPromise<boolean>('getScreenReaderState');
  }

  static getInstance(): AccessibilityBrowserProxy {
    return instance || (instance = new AccessibilityBrowserProxyImpl());
  }

  static setInstance(obj: AccessibilityBrowserProxy) {
    instance = obj;
  }
}

let instance: AccessibilityBrowserProxy|null = null;
