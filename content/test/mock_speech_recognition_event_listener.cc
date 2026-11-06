// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock speech recognition event listener implementation
// summary: Implements the constructor and destructor of the mock speech recognition event listener used by content tests.
// ---

#include "content/test/mock_speech_recognition_event_listener.h"

namespace content {

MockSpeechRecognitionEventListener::MockSpeechRecognitionEventListener() =
    default;

MockSpeechRecognitionEventListener::~MockSpeechRecognitionEventListener() =
    default;

}  // namespace content
