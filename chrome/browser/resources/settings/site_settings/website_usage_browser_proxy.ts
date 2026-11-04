// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Website usage browser proxy
// summary: Browser proxy interface and implementation for fetching a host's storage usage total and clearing an origin's usage via chrome.send messages.
// ---

export interface WebsiteUsageBrowserProxy {
  fetchUsageTotal(host: string): void;
  clearUsage(origin: string): void;
}

export class WebsiteUsageBrowserProxyImpl implements WebsiteUsageBrowserProxy {
  fetchUsageTotal(host: string) {
    chrome.send('fetchUsageTotal', [host]);
  }

  clearUsage(origin: string) {
    chrome.send('clearUnpartitionedUsage', [origin]);
  }

  static getInstance(): WebsiteUsageBrowserProxy {
    return instance || (instance = new WebsiteUsageBrowserProxyImpl());
  }

  static setInstance(obj: WebsiteUsageBrowserProxy) {
    instance = obj;
  }
}

let instance: WebsiteUsageBrowserProxy|null = null;
