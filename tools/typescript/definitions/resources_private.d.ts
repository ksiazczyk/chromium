// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @fileoverview Definitions for chrome.resourcesPrivate API. */
// TODO(crbug.com/40179454): Auto-generate this file.

// ---docerion
// type: source
// title: Type definitions for the chrome.resourcesPrivate API
// summary: Declares the chrome.resourcesPrivate API for retrieving localized strings for components such as identity and PDF.
// ---

declare namespace chrome {
  export namespace resourcesPrivate {
    export enum Component {
      IDENTITY = 'identity',
      PDF = 'pdf',
    }

    export function getStrings(
        component: Component,
        callback: (strings: {[key: string]: string}) => void): void;
  }
}
