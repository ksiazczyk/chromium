// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Most visited window proxy
// summary: Singleton wrapper around window APIs such as matchMedia and Date.now so they can be mocked in tests.
// ---

/**
 * Abstracts built-in JS functions in order to mock in tests.
 */
export class MostVisitedWindowProxy {
  matchMedia(query: string): MediaQueryList {
    return window.matchMedia(query);
  }

  now(): number {
    return Date.now();
  }

  static getInstance(): MostVisitedWindowProxy {
    return instance || (instance = new MostVisitedWindowProxy());
  }

  static setInstance(obj: MostVisitedWindowProxy) {
    instance = obj;
  }
}

let instance: MostVisitedWindowProxy|null = null;
