// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ProgressUiState data class for the progress bar
// summary: Data class holding the progress fraction and running flag used as state for the progress bar.
// ---

package org.chromium.chrome.browser.bricks.progress

/** State for the progress bar. */
data class ProgressUiState(
  val progressFraction: Float = 0f,
  val isRunning: Boolean = false,
)
