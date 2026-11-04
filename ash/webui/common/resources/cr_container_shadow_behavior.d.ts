// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Type declarations for CrContainerShadowBehavior
// summary: Declares the CrContainerShadowBehavior interface and export for TypeScript consumers of the container shadow behavior.
// ---

export {CrContainerShadowBehavior};

interface CrContainerShadowBehavior {
  enableShadowBehavior(enable: boolean): void;
  showDropShadows(): void;
}

declare const CrContainerShadowBehavior: object;
