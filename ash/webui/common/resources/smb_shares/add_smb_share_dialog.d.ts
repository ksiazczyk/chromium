// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Type declarations for the add SMB share dialog element
// summary: Declares the AddSmbShareDialogElement interface, its properties, and the custom element tag mapping.
// ---

import type {LegacyElementMixin} from 'chrome://resources/polymer/v3_0/polymer/lib/legacy/legacy-element-mixin.js';

export interface AddSmbShareDialogElement extends LegacyElementMixin,
                                                  HTMLElement {
  lastUrl: string;
  shouldOpenFileManagerAfterMount: boolean;
}

declare global {
  interface HTMLElementTagNameMap {
    'add-smb-share-dialog': AddSmbShareDialogElement;
  }
}
