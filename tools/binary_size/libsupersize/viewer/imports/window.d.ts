// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview
 * Declarations of prperaties added to global `window` for checking only (not in
 * production).
 */

// ---docerion
// type: source
// title: TypeScript declarations for global window properties
// summary: Declares type-check-only additions to the global window object, such as initClient and supersize, for the viewer.
// ---

// Global `window` context.
declare global {
  interface Window {
    initClient: Func;
    supersize: any;
  }
}

export {};
