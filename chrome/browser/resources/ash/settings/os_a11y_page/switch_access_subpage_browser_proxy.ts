// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Switch Access subpage browser proxy
// summary: Defines the browser proxy that sends Switch Access assignment refresh and setup guide notification messages to the browser.
// ---

export interface SwitchAccessSubpageBrowserProxy {
  /**
   * Refresh assignments by requesting SwitchAccessHandler send all readable key
   * names for each action pref via the 'switch-access-assignments-changed'
   * message.
   */
  refreshAssignmentsFromPrefs(): void;

  /**
   * Notifies SwitchAccessHandler an assignment dialog has been attached.
   */
  notifySwitchAccessActionAssignmentPaneActive(): void;

  /**
   * Notifies SwitchAccessHandler an assignment dialog is closing.
   */
  notifySwitchAccessActionAssignmentPaneInactive(): void;

  /**
   * Notifies when the setup guide dialog is ready.
   */
  notifySwitchAccessSetupGuideAttached(): void;
}

let instance: SwitchAccessSubpageBrowserProxy|null = null;

export class SwitchAccessSubpageBrowserProxyImpl implements
    SwitchAccessSubpageBrowserProxy {
  static getInstance(): SwitchAccessSubpageBrowserProxy {
    return instance || (instance = new SwitchAccessSubpageBrowserProxyImpl());
  }

  static setInstanceForTesting(obj: SwitchAccessSubpageBrowserProxy): void {
    instance = obj;
  }

  refreshAssignmentsFromPrefs(): void {
    chrome.send('refreshAssignmentsFromPrefs');
  }

  notifySwitchAccessActionAssignmentPaneActive(): void {
    chrome.send('notifySwitchAccessActionAssignmentPaneActive');
  }

  notifySwitchAccessActionAssignmentPaneInactive(): void {
    chrome.send('notifySwitchAccessActionAssignmentPaneInactive');
  }

  notifySwitchAccessSetupGuideAttached(): void {
    // Currently only used in testing, so no event is fired.
  }
}
