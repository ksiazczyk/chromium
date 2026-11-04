// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Healthd internals page interface
// summary: Defines the HealthdInternalsPage interface that pages implement to update visibility and the UI update interval.
// ---

export interface HealthdInternalsPage {
  // Update the visibility for the page.
  updateVisibility(isVisible: boolean): void;

  // Update the UI update interval for the page.
  updateUiUpdateInterval(intervalSeconds: number): void;
}
