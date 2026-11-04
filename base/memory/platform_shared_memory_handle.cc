// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Platform shared memory handle POSIX implementation
// summary: Implements the ScopedFDPair helper that owns the main and read-only file descriptors of a shared memory region on POSIX platforms other than Apple and Android.
// ---

#include "base/memory/platform_shared_memory_handle.h"

namespace base::subtle {

#if BUILDFLAG(IS_POSIX) && !BUILDFLAG(IS_APPLE) && !BUILDFLAG(IS_ANDROID)
ScopedFDPair::ScopedFDPair() = default;

ScopedFDPair::ScopedFDPair(ScopedFDPair&&) = default;

ScopedFDPair& ScopedFDPair::operator=(ScopedFDPair&&) = default;

ScopedFDPair::~ScopedFDPair() = default;

ScopedFDPair::ScopedFDPair(ScopedFD in_fd, ScopedFD in_readonly_fd)
    : fd(std::move(in_fd)), readonly_fd(std::move(in_readonly_fd)) {}

FDPair ScopedFDPair::get() const {
  return {fd.get(), readonly_fd.get()};
}
#endif

}  // namespace base::subtle
