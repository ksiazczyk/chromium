// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedAVPacket implementation
// summary: Implements the ScopedAVPacket wrapper that allocates, owns, and moves FFmpeg AVPacket instances safely.
// ---

#include "media/ffmpeg/scoped_av_packet.h"

#include "media/ffmpeg/ffmpeg_common.h"

namespace media {

ScopedAVPacket::ScopedAVPacket() = default;

ScopedAVPacket::~ScopedAVPacket() = default;

ScopedAVPacket::ScopedAVPacket(AVPacket* raw_packet) : packet_(raw_packet) {}

ScopedAVPacket::ScopedAVPacket(ScopedAVPacket&&) = default;

ScopedAVPacket& ScopedAVPacket::operator=(ScopedAVPacket&&) = default;

// static
ScopedAVPacket ScopedAVPacket::Allocate() {
  return ScopedAVPacket(av_packet_alloc());
}

}  // namespace media
