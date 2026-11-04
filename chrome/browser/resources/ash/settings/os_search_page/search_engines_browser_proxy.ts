// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview A helper object used from the "Manage search engines" section
 * to interact with the browser.
 */

// ---docerion
// type: source
// title: Search engines browser proxy
// summary: Browser proxy used by the manage search engines section to fetch search engine lists and categorized template URLs and to open browser search settings.
// ---

import {sendWithPromise} from 'chrome://resources/js/cr.js';

/**
 * The subset of fields sent by
 * chrome/browser/ui/webui/settings/search_engines_handler.cc that OS Settings
 * uses.
 */
export interface SearchEngine {
  default: boolean;
  name: string;
}

export interface SearchEnginesInfo {
  defaults: SearchEngine[];
}

export interface CategorizedTemplateUrls {
  activeSiteShortcuts: SearchEngine[];
}

export interface SearchEnginesBrowserProxy {
  getCategorizedTemplateUrls(): Promise<CategorizedTemplateUrls>;
  getSearchEnginesList(): Promise<SearchEnginesInfo>;
  openBrowserSearchSettings(): void;
}

let instance: SearchEnginesBrowserProxy|null = null;

export class SearchEnginesBrowserProxyImpl implements
    SearchEnginesBrowserProxy {
  static getInstance(): SearchEnginesBrowserProxy {
    return instance || (instance = new SearchEnginesBrowserProxyImpl());
  }

  static setInstanceForTesting(obj: SearchEnginesBrowserProxy): void {
    instance = obj;
  }

  getCategorizedTemplateUrls(): Promise<CategorizedTemplateUrls> {
    return sendWithPromise('getCategorizedTemplateUrls');
  }

  getSearchEnginesList(): Promise<SearchEnginesInfo> {
    return sendWithPromise('getSearchEnginesList');
  }

  openBrowserSearchSettings(): void {
    chrome.send('openBrowserSearchSettings');
  }
}
