// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CrScrollableBehavior type declarations
// summary: Declares the CrScrollableBehavior interface for saving, restoring, and updating scroll state of iron-list containers.
// ---

import type {IronListElement} from 'chrome://resources/polymer/v3_0/iron-list/iron-list.js';

export {CrScrollableBehavior};

interface CrScrollableBehavior {
  updateScrollableContents(): void;
  requestUpdateScroll(): void;
  saveScroll(list: IronListElement): void;
  restoreScroll(list: IronListElement): void;
}

declare const CrScrollableBehavior: object;
