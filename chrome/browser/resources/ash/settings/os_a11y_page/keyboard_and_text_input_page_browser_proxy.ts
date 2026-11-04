// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Keyboard and text input page browser proxy
// summary: Browser proxy for the keyboard and text input accessibility page that notifies the browser when the page is ready.
// ---

export interface KeyboardAndTextInputPageBrowserProxy {
  /**
   * Calls MaybeAddSodaInstallerObserver() and MaybeAddDictationLocales().
   */
  keyboardAndTextInputPageReady(): void;
}

let instance: KeyboardAndTextInputPageBrowserProxy|null = null;

export class KeyboardAndTextInputPageBrowserProxyImpl implements
    KeyboardAndTextInputPageBrowserProxy {
  static getInstance(): KeyboardAndTextInputPageBrowserProxy {
    return instance ||
        (instance = new KeyboardAndTextInputPageBrowserProxyImpl());
  }

  static setInstanceForTesting(obj: KeyboardAndTextInputPageBrowserProxy):
      void {
    instance = obj;
  }

  keyboardAndTextInputPageReady(): void {
    chrome.send('manageA11yPageReady');
  }
}
