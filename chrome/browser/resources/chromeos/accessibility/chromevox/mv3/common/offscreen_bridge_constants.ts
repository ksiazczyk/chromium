// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shared data types for the offscreen bridge
// summary: Defines StateWithMaxCellHeight and ClipboardData interfaces used when exchanging image and clipboard data with the offscreen document.
// ---

export interface StateWithMaxCellHeight {
  rows: number;
  columns: number;
  cellWidth: number;
  cellHeight: number;
  maxCellHeight: number;
}

export interface ClipboardData {
  eventType?: string, clipboardContent?: string,
}
