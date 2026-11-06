// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebUI Mojo TS test mapped dict type interface
// summary: Declares the MappedDictType interface used by the WebUI Mojo TypeScript mapped type tests.
// ---

export interface MappedDictType {
  get(key: string): string|undefined;
  set(key: string, value: string): void;
  keys(): Iterable<string>;
}
