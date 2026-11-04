// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: chrome.i18n API TypeScript definitions
// summary: Hand-written TypeScript declarations for the chrome.i18n API, providing accepted language detection, message lookup, and UI language functions for accessibility code.
// ---

/** @fileoverview Definitions for chrome.i18n API */
// TODO(crbug.com/40179454): Auto-generate this file.
declare namespace chrome {
  export namespace i18n {

    export function getAcceptLanguages(callback: (languages: string[]) => void):
        void;

    export function getMessage(
        messageName: string, args?: string|string[],
        options?: {escapeLt: boolean}): string;

    export function getUILanguage(): string;

    interface DetectLanguageResult {
      isReliable: boolean;
      languages: Array<{
        language: string,
        percentage: number,
      }>;
    }

    export function detectLanguage(
        text: string, callback: (result: DetectLanguageResult) => void): void;
  }
}
