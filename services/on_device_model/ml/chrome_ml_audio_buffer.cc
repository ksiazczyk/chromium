// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AudioBuffer implementation
// summary: Implements the default constructors, destructors, and assignment operators for the ml::AudioBuffer type.
// ---

#include "services/on_device_model/ml/chrome_ml_audio_buffer.h"

namespace ml {

AudioBuffer::AudioBuffer() = default;
AudioBuffer::~AudioBuffer() = default;
AudioBuffer::AudioBuffer(const AudioBuffer& other) = default;
AudioBuffer& AudioBuffer::operator=(const AudioBuffer& other) = default;
AudioBuffer::AudioBuffer(AudioBuffer&& other) = default;
AudioBuffer& AudioBuffer::operator=(AudioBuffer&& other) = default;

}  // namespace ml
