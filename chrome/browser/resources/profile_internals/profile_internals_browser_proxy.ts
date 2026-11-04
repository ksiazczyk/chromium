// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy and profile state types for Profile Internals
// summary: Defines profile state types and the browser proxy the debug page uses to request the profiles list via chrome.send.
// ---

export interface KeepAlive {
  origin: string;
  count: number;
}

export interface ProfileState {
  foregroundColor: string;
  backgroundColor: string;
  profilePath: string;
  localProfileName: string;
  signinState: string;
  signinRequired: boolean;
  gaiaName: string;
  gaiaId: string;
  userName: string;
  hostedDomain: string;
  isSupervised: boolean;
  isOmitted: boolean;
  isEphemeral: boolean;
  userAcceptedAccountManagement: boolean;
  keepAlives: KeepAlive[];
  isLoaded: boolean;
  hasOffTheRecord: boolean;
  profileCountry: string;
  localeCountry: string;
  variationsCountry: string;
  initialKeywordsDbCountry: string;
  updatedKeywordsDbCountry: string;
}

export interface ProfileStateElement {
  className: string;
  profileState: ProfileState;
  expanded: boolean;
}

/**
 * @fileoverview A helper object used by the profile internals debug page
 * to interact with the browser.
 */
export interface ProfileInternalsBrowserProxy {
  getProfilesList(): void;
}

export class ProfileInternalsBrowserProxyImpl implements
    ProfileInternalsBrowserProxy {
  getProfilesList(): void {
    chrome.send('getProfilesList');
  }

  static getInstance(): ProfileInternalsBrowserProxy {
    return instance || (instance = new ProfileInternalsBrowserProxyImpl());
  }

  static setInstance(obj: ProfileInternalsBrowserProxy) {
    instance = obj;
  }
}

let instance: ProfileInternalsBrowserProxy|null = null;
