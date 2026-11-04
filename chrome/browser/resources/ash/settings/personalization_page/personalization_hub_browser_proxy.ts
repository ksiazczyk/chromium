// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Personalization hub browser proxy
// summary: TypeScript browser proxy interface and singleton implementation that sends the openPersonalizationHub message to the browser, with a hook for injecting test instances.
// ---

export interface PersonalizationHubBrowserProxy {
  openPersonalizationHub(): void;
}

let instance: PersonalizationHubBrowserProxy|null = null;

export class PersonalizationHubBrowserProxyImpl implements
    PersonalizationHubBrowserProxy {
  static getInstance(): PersonalizationHubBrowserProxy {
    return instance || (instance = new PersonalizationHubBrowserProxyImpl());
  }

  static setInstanceForTesting(obj: PersonalizationHubBrowserProxy): void {
    instance = obj;
  }

  openPersonalizationHub(): void {
    chrome.send('openPersonalizationHub');
  }
}
