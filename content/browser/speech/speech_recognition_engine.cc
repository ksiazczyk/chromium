// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SpeechRecognitionEngine base implementation
// summary: Implements shared SpeechRecognitionEngine methods for setting the delegate and audio parameters in the browser-side speech recognition code.
// ---

#include "content/browser/speech/speech_recognition_engine.h"

#include "media/base/audio_parameters.h"

namespace content {

void SpeechRecognitionEngine::set_delegate(Delegate* delegate) {
  delegate_ = delegate;
}

void SpeechRecognitionEngine::SetAudioParameters(
    media::AudioParameters audio_parameters) {
  audio_parameters_ = audio_parameters;
}

}  // namespace content
