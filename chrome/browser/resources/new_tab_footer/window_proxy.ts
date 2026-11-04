// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Window proxy for testable window access
// summary: Singleton class wrapping window.location.href as a URL so builtin browser functions can be mocked in tests.
// ---

let instance: WindowProxy|null = null;

/** Abstracts some builtin JS functions to mock them in tests. */
export class WindowProxy {
  static getInstance(): WindowProxy {
    return instance || (instance = new WindowProxy());
  }

  static setInstance(newInstance: WindowProxy) {
    instance = newInstance;
  }

  /** Returns `window.location.href` wrapped in a URL object. */
  get url(): URL {
    return new URL(window.location.href);
  }
}
