// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Type declarations for HTML sanitization helpers
// summary: Declares the sanitizeInnerHtml and parseHtmlSubset APIs with their options for safely handling HTML strings in WebUI.
// ---

export interface SanitizeInnerHtmlOpts {
  substitutions?: string[];
  attrs?: string[];
  tags?: string[];
}

export function sanitizeInnerHtml(
    rawString: string, opts?: SanitizeInnerHtmlOpts): string;
export function parseHtmlSubset(
    s: string, extraTags?: string[], extraAttrs?: string[]): DocumentFragment;
