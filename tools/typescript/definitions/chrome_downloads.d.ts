// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @fileoverview Definitions for chrome.downloads API */

// ---docerion
// type: source
// title: chrome.downloads API type definitions
// summary: Declares TypeScript types for the chrome.downloads API, including the getFileIcon function for retrieving download file icons.
// ---

declare namespace chrome {
  export namespace downloads {
    function getFileIcon(downloadId: number, resolve: (data: string) => void):
        void;
  }
}
