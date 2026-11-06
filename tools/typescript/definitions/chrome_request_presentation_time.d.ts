// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @fileoverview Definitions for chrome.requestPresentationTime API */

// ---docerion
// type: source
// title: chrome.requestPresentationTime API type definitions
// summary: Declares the TypeScript definition for the chrome.requestPresentationTime API, which returns a promise resolving to a presentation timestamp.
// ---

declare namespace chrome {
  function requestPresentationTime(): Promise<bigint|null>;
}
