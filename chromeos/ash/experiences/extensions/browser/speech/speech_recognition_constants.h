// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SpeechRecognitionType enum declaration
// summary: Declares the SpeechRecognitionType enum with network and on-device values and the function converting it to the extension API type.
// ---

#ifndef CHROMEOS_ASH_EXPERIENCES_EXTENSIONS_BROWSER_SPEECH_SPEECH_RECOGNITION_CONSTANTS_H_
#define CHROMEOS_ASH_EXPERIENCES_EXTENSIONS_BROWSER_SPEECH_SPEECH_RECOGNITION_CONSTANTS_H_

#include "build/build_config.h"
#include "chromeos/ash/experiences/extensions/common/api/speech_recognition_private.h"

static_assert(BUILDFLAG(IS_CHROMEOS));

namespace speech {

enum class SpeechRecognitionType { kNetwork, kOnDevice };

extensions::api::speech_recognition_private::SpeechRecognitionType
SpeechRecognitionTypeToApiType(SpeechRecognitionType type);

}  // namespace speech

#endif  // CHROMEOS_ASH_EXPERIENCES_EXTENSIONS_BROWSER_SPEECH_SPEECH_RECOGNITION_CONSTANTS_H_
