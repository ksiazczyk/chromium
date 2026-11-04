// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy for the HTTP messages tab
// summary: Browser proxy that initializes the HTTP handler and triggers Nearby Share RPCs such as updateDevice, listContactPeople and listPublicCertificates.
// ---

/**
 * JavaScript hooks into the native WebUI handler to pass HttpMessages to the
 * Http Messages tab.
 */
export class NearbyHttpBrowserProxy {
  /**
   * Initializes web contents in the WebUI handler.
   */
  initialize() {
    chrome.send('initializeHttp');
  }

  /**
   * Triggers UpdateDevice RPC.
   */
  updateDevice() {
    chrome.send('updateDevice');
  }

  /**
   * Triggers ListContactPeople RPC.
   */
  listContactPeople() {
    chrome.send('listContactPeople');
  }

  /**
   * Triggers ListPublicCertificates RPC.
   */
  listPublicCertificates() {
    chrome.send('listPublicCertificates');
  }

  static getInstance(): NearbyHttpBrowserProxy {
    return instance || (instance = new NearbyHttpBrowserProxy());
  }
}

let instance: NearbyHttpBrowserProxy|null = null;
