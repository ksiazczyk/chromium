// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab strip item type definitions
// summary: Defines the TabItem and TabGroupItem interfaces and the TabStripItem union used to model entries in the tab strip.
// ---

import type {Tab, TabGroupVisualData} from '/tab_strip_api/tab_strip_api_data_model.mojom-webui.js';

export interface TabItem {
  type: 'tab';
  id: string;
  tabData: Tab;
}

export interface TabGroupItem {
  type: 'group';
  id: string;
  groupData: TabGroupVisualData;
}

export type TabStripItem = TabItem|TabGroupItem;
