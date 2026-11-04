// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WindowProxy
// summary: Singleton wrapper around browser built-ins such as Date.now and navigator.onLine so they can be mocked in tests.
// ---

let instance: WindowProxy|null = null;

declare global {
  interface Window {
    // https://github.com/microsoft/TypeScript/issues/40807
    requestIdleCallback(callback: () => void, options?: {timeout: number}):
        void;
  }
}

/** Abstracts some builtin JS functions to mock them in tests. */
export class WindowProxy {
  static getInstance(): WindowProxy {
    return instance || (instance = new WindowProxy());
  }

  static setInstance(newInstance: WindowProxy) {
    instance = newInstance;
  }

  now(): number {
    return Date.now();
  }

  get onLine(): boolean {
    return window.navigator.onLine;
  }
}
