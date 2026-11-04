// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TitleItem class
// summary: Defines a TitleItem class representing a section title in the tab search UI, carrying title text plus expandable and expanded state flags.
// ---

export class TitleItem {
  title: string;
  expandable: boolean;
  expanded: boolean;

  constructor(
      title: string, expandable: boolean = false, expanded: boolean = false) {
    this.title = title;
    this.expandable = expandable;
    this.expanded = expanded;
  }
}
