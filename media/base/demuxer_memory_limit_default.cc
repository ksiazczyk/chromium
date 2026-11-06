// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default demuxer memory limits
// summary: Returns default or low demuxer audio and video memory limits depending on whether the device is low-end.
// ---

#include "media/base/demuxer_memory_limit.h"

#include "base/system/sys_info.h"

namespace media {

base::ByteSize GetDemuxerStreamAudioMemoryLimit(
    const AudioDecoderConfig* /*audio_config*/) {
  return base::SysInfo::IsLowEndDevice()
             ? internal::kDemuxerStreamAudioMemoryLimitLow
             : internal::kDemuxerStreamAudioMemoryLimitDefault;
}

base::ByteSize GetDemuxerStreamVideoMemoryLimit(
    DemuxerType /*demuxer_type*/,
    const VideoDecoderConfig* /*video_config*/) {
  return base::SysInfo::IsLowEndDevice()
             ? internal::kDemuxerStreamVideoMemoryLimitLow
             : internal::kDemuxerStreamVideoMemoryLimitDefault;
}

base::ByteSize GetDemuxerMemoryLimit(DemuxerType demuxer_type) {
  return GetDemuxerStreamAudioMemoryLimit(nullptr) +
         GetDemuxerStreamVideoMemoryLimit(demuxer_type, nullptr);
}

}  // namespace media
