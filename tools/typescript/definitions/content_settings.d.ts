// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TypeScript definitions for chrome.contentSettings API
// summary: Declares TypeScript types for the chrome.contentSettings API, including the javascript content setting and its getter.
// ---

declare namespace chrome {
  export namespace contentSettings {

    interface GetContenSettingParams {
      primaryUrl: string;
      secondaryUrl?: string;
    }

    interface ContentSetting {
      get(details: GetContenSettingParams,
          callback: (result: {setting: any}) => void): void;
    }

    export const javascript: ContentSetting;
  }
}
