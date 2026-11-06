// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows TTS XML removal utility
// summary: Implements RemoveXml, which replaces angle brackets with spaces in utterances to avoid SAPI's problematic XML and SSML handling.
// ---

#include "content/browser/speech/tts_win_utils.h"

namespace content {

void RemoveXml(std::wstring& utterance) {
  for (auto it = utterance.begin(); it != utterance.end(); ++it) {
    if (*it == '<' || *it == '>') {
      *it = ' ';
    }
  }
}

}  // namespace content
