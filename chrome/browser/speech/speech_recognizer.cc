// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Speech recognizer base class implementation
// summary: Implements the SpeechRecognizer base class constructor and destructor that hold a weak pointer to the speech recognizer delegate.
// ---

#include "chrome/browser/speech/speech_recognizer.h"

#include "chrome/browser/speech/speech_recognizer_delegate.h"

SpeechRecognizer::SpeechRecognizer(
    const base::WeakPtr<SpeechRecognizerDelegate>& delegate)
    : delegate_(delegate) {}

SpeechRecognizer::~SpeechRecognizer() = default;
