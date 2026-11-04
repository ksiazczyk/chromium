// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab strip event type definitions
// summary: Defines event types for the WebUI tab strip, such as TabClosed, TabUpdated, and TabAdded, based on the tab strip API Mojo types.
// ---

import type {Tab as TabData} from '/tab_strip_api/tab_strip_api_data_model.mojom-webui.js';
import type {NodeId} from '/tab_strip_api/tab_strip_api_types.mojom-webui.js';

export type TabClosed = NodeId;

export type TabUpdated = TabData;

export interface TabAdded {
  id: NodeId;
  isActive: boolean;
}
