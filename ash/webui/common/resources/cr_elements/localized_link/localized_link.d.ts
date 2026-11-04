// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Type declarations for the localized-link element
// summary: Declares the LocalizedLinkElement interface with title and body properties and registers it in the HTMLElementTagNameMap for the localized-link tag.
// ---

interface LocalizedLinkElement extends HTMLElement {
  title: string;
  body: string;
}

export {LocalizedLinkElement};

declare global {
  interface HTMLElementTagNameMap {
    'localized-link': LocalizedLinkElement;
  }
}
