// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Computed color style helper
// summary: Exports getRGBAFromComputedStyle, which returns an element's computed background color as an RGBA string for display.
// ---

export function getRGBAFromComputedStyle(element: HTMLElement): string {
  const computedStyle = window.getComputedStyle(element);
  return computedStyle.backgroundColor;
}
