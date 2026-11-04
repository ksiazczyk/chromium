// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BeforeUnload proxy helper
// summary: Provides a proxy interface for preventing the beforeunload event's default action, with a replaceable instance to support testing.
// ---

// Helper object to prevent the beforeunload event's default action. This proxy
// is useful for testing.
export interface BeforeUnloadProxy {
  preventDefault(event: BeforeUnloadEvent): void;
}

export class BeforeUnloadProxyImpl implements BeforeUnloadProxy {
  preventDefault(event: BeforeUnloadEvent) {
    event.preventDefault();
  }

  static getInstance(): BeforeUnloadProxy {
    return instance || (instance = new BeforeUnloadProxyImpl());
  }

  static setInstance(obj: BeforeUnloadProxy): void {
    instance = obj;
  }
}

let instance: BeforeUnloadProxy|null = null;
