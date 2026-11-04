// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy for the settingsPrivate API
// summary: Singleton proxy wrapping chrome.settingsPrivate for getting and setting preferences and listening to pref change events, with a replaceable instance for testing.
// ---

export class PrefsBrowserProxy implements PrefsBrowserProxy {
  getAllPrefs() {
    return chrome.settingsPrivate.getAllPrefs();
  }

  getPref(name: string) {
    return chrome.settingsPrivate.getPref(name);
  }

  setPref(name: string, value: unknown, pageId?: string) {
    return chrome.settingsPrivate.setPref(name, value, pageId);
  }

  get onPrefsChanged() {
    return chrome.settingsPrivate.onPrefsChanged;
  }

  static getInstance(): PrefsBrowserProxy {
    return instance || (instance = new PrefsBrowserProxy());
  }

  static setInstance(obj: PrefsBrowserProxy) {
    instance = obj;
  }
}

let instance: PrefsBrowserProxy|null = null;
