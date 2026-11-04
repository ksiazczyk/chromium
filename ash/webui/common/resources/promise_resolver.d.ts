// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// TODO(dpapad): Auto-generate this file when PromiseResolver is declared as
// "class PromiseResolver {...}", instead of
// "var PromiseResolver = class {...}".

// ---docerion
// type: source
// title: Type declarations for PromiseResolver
// summary: Declares the PromiseResolver class API exposing a promise plus resolve and reject methods with fulfillment tracking.
// ---

export class PromiseResolver<T> {
  readonly isFulfilled: boolean;
  readonly promise: Promise<T>;

  resolve(arg: T): void;
  reject(error?: any): void;
}
