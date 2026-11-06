// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Realtime audio thread implementation
// summary: Implements RealtimeAudioThread, a base::Thread subclass carrying a configurable realtime period used on Apple platforms.
// ---

#include "services/audio/realtime_audio_thread.h"

#include "base/time/time.h"

namespace audio {
RealtimeAudioThread::RealtimeAudioThread(const std::string& name,
                                         base::TimeDelta realtime_period)
    : base::Thread(name), realtime_period_(realtime_period) {}

RealtimeAudioThread::~RealtimeAudioThread() {
  // As per API contract. See base/threading/thread.h.
  Stop();
}

#if BUILDFLAG(IS_APPLE)
base::TimeDelta RealtimeAudioThread::GetRealtimePeriod() {
  return realtime_period_;
}
#endif
}  // namespace audio