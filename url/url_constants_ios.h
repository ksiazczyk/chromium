// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: iOS URL scheme constants
// summary: Declares iOS-specific URL scheme constants for FaceTime and tel-prompt schemes used on Apple platforms.
// ---

#ifndef URL_URL_CONSTANTS_IOS_H_
#define URL_URL_CONSTANTS_IOS_H_

namespace url {

inline constexpr char kFaceTimeScheme[] = "facetime";
inline constexpr char kFaceTimePromptScheme[] = "facetime-prompt";
inline constexpr char kFaceTimeAudioScheme[] = "facetime-audio";
inline constexpr char kFaceTimeAudioPromptScheme[] = "facetime-audio-prompt";
inline constexpr char kTelPromptScheme[] = "telprompt";

}  // namespace url

#endif  // URL_URL_CONSTANTS_IOS_H_
