// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview A helper object used from the languages section
 * to interact with the browser.
 */

// ---docerion
// type: source
// title: Browser proxy for the languages section
// summary: Exposes languageSettingsPrivate APIs and Windows prospective UI language handling to the languages settings UI.
// ---

// <if expr="is_win">
import {sendWithPromise} from 'chrome://resources/js/cr.js';
// </if>

export interface LanguagesBrowserProxy {
  // <if expr="is_win">
  /**
   * Sets the prospective UI language to the chosen language. This won't
   * affect the actual UI language until a restart.
   */
  setProspectiveUiLanguage(languageCode: string): void;

  getProspectiveUiLanguage(): Promise<string>;

  // </if>

  getLanguageSettingsPrivate(): typeof chrome.languageSettingsPrivate;
}

export class LanguagesBrowserProxyImpl implements LanguagesBrowserProxy {
  // <if expr="is_win">
  setProspectiveUiLanguage(languageCode: string) {
    chrome.send('setProspectiveUILanguage', [languageCode]);
  }

  getProspectiveUiLanguage() {
    return sendWithPromise<string>('getProspectiveUILanguage');
  }

  // </if>

  getLanguageSettingsPrivate() {
    return chrome.languageSettingsPrivate;
  }

  static getInstance(): LanguagesBrowserProxy {
    return instance || (instance = new LanguagesBrowserProxyImpl());
  }

  static setInstance(obj: LanguagesBrowserProxy) {
    instance = obj;
  }
}

let instance: LanguagesBrowserProxy|null = null;
