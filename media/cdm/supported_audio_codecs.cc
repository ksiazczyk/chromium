// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CDM supported audio codecs implementation
// summary: Implements GetCdmSupportedAudioCodecs, returning the set of audio codecs a CDM can decode after decrypting the stream, with build flags controlling proprietary codec support.
// ---

#include "media/cdm/supported_audio_codecs.h"

#include "media/media_buildflags.h"

namespace media {

const base::flat_set<AudioCodec> GetCdmSupportedAudioCodecs() {
  return {
    AudioCodec::kOpus, AudioCodec::kVorbis, AudioCodec::kFLAC,
#if BUILDFLAG(USE_PROPRIETARY_CODECS)
        AudioCodec::kAAC,
#if BUILDFLAG(ENABLE_PLATFORM_DTS_AUDIO)
        AudioCodec::kDTS, AudioCodec::kDTSE, AudioCodec::kDTSXP2,
#endif  // BUILDFLAG(ENABLE_PLATFORM_DTS_AUDIO)
#if BUILDFLAG(ENABLE_PLATFORM_AC3_EAC3_AUDIO)
        AudioCodec::kAC3, AudioCodec::kEAC3,
#endif  // BUILDFLAG(ENABLE_PLATFORM_AC3_EAC3_AUDIO)
#endif  // BUILDFLAG(USE_PROPRIETARY_CODECS)
  };
}

}  // namespace media
