// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SanitizeEvent UMA enum
// summary: Defines the SanitizeEvent enum used for UMA histogram logging of sanitize flow stages, with a note to keep it in sync with enums.xml.
// ---

#ifndef ASH_WEBUI_SANITIZE_UI_SANITIZE_UI_UMA_H_
#define ASH_WEBUI_SANITIZE_UI_SANITIZE_UI_UMA_H_

namespace ash {

// The enums below have been used for UMA purposes, please make sure not to
// renumber the entries. If you update this enum, please also update the
// corresponding enum in //tools/metrics/histograms/enums.xml
enum class SanitizeEvent {
  kSanitizeInitialScreen = 0,
  kSanitizeProcessStarted = 1,
  kSanitizeDoneScreen = 2,
  kMaxValue = kSanitizeDoneScreen,
};

}  // namespace ash

#endif  // ASH_WEBUI_SANITIZE_UI_SANITIZE_UI_UMA_H_
