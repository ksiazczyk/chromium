// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Select-to-speak activation method metrics enum
// summary: Defines the CrosSelectToSpeakActivationMethod enum used to record how users activate and navigate Select-to-speak in histograms.
// ---

#ifndef ASH_SYSTEM_ACCESSIBILITY_SELECT_TO_SPEAK_SELECT_TO_SPEAK_METRICS_UTILS_H_
#define ASH_SYSTEM_ACCESSIBILITY_SELECT_TO_SPEAK_SELECT_TO_SPEAK_METRICS_UTILS_H_

namespace ash {

// How the user performs an action, including canceling or navigating between
// paragraphs and sentences in Select-to-speak. This is recorded in histograms
// |CrosSelectToSpeak.ParagraphNavigationMethod|,
// |CrosSelectToSpeak.SentenceNavigationMethod|, and
// |CrosSelectToSpeak.BubbleDismissMethod|. These values correspond to
// CrosSelectToSpeakActivationMethod in enums.xml, so should not be
// changed. New values should be added at the end.
enum class CrosSelectToSpeakActivationMethod {
  kUnknown = 0,
  kMenuButton = 1,
  kKeyboardShortcut = 2,
  kMaxValue = kKeyboardShortcut
};

}  // namespace ash

#endif  // ASH_SYSTEM_ACCESSIBILITY_SELECT_TO_SPEAK_SELECT_TO_SPEAK_METRICS_UTILS_H_
