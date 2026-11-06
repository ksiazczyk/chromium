// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Private audio API type definitions
// summary: Defines minimal private type aliases for audio object and device IDs plus the kAudioObjectUnknown constant used by the iOS audio backend.
// ---

#ifndef MEDIA_AUDIO_IOS_AUDIO_PRIVATE_API_H_
#define MEDIA_AUDIO_IOS_AUDIO_PRIVATE_API_H_
typedef UInt32 AudioObjectPropertyScope;
typedef UInt32 AudioObjectID;
typedef AudioObjectID AudioDeviceID;

constexpr UInt32 kAudioObjectUnknown = 0;

#endif  // MEDIA_AUDIO_IOS_AUDIO_PRIVATE_API_H_
