// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FocusRowBehavior type declarations
// summary: TypeScript declarations for the FocusRowBehavior interface used by iron-list row items to track and manage focus state.
// ---

import type {FocusRow} from 'chrome://resources/js/focus_row.js';

export interface FocusRowBehavior {
  id: string|null|undefined;
  isFocused: boolean|null|undefined;
  focusRowIndex: number|null|undefined;
  lastFocused: Element|null;
  ironListTabIndex: number;
  listBlurred: boolean|null|undefined;
  focusRowIndexChanged(newIndex: number, oldIndex: number): void;
  getFocusRow(): FocusRow;
}

declare const FocusRowBehavior: object;
