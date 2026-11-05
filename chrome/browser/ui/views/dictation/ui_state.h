// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Dictation UI state enum
// summary: 'Defines the UiState enum listing the dictation session states: inactive, initializing, transcribing and finalizing.'
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_DICTATION_UI_STATE_H_
#define CHROME_BROWSER_UI_VIEWS_DICTATION_UI_STATE_H_

namespace dictation {

enum class UiState {
  kInactive,
  kInitializing,
  kTranscribing,
  kFinalizing,
};

}  // namespace dictation

#endif  // CHROME_BROWSER_UI_VIEWS_DICTATION_UI_STATE_H_
