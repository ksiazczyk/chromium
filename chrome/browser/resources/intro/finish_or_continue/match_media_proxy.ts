// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Match media proxy
// summary: Singleton proxy around window.matchMedia that lets the intro app query media conditions and allows tests to substitute the implementation.
// ---

export interface MatchMediaProxy {
  matchMedia(query: string): MediaQueryList;
}

export class MatchMediaProxyImpl implements MatchMediaProxy {
  matchMedia(query: string): MediaQueryList {
    return window.matchMedia(query);
  }

  static getInstance(): MatchMediaProxy {
    return instance || (instance = new MatchMediaProxyImpl());
  }

  static setInstance(proxy: MatchMediaProxy) {
    instance = proxy;
  }
}

let instance: MatchMediaProxy|null = null;
