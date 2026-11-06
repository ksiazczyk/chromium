// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CaptureVersion implementation
// summary: Implements CaptureVersion::ToString, formatting the source and sub_capture version numbers that identify the state of a capture session.
// ---

#include "media/base/capture_version.h"

#include "base/strings/stringprintf.h"

namespace media {

CaptureVersion::CaptureVersion(uint32_t source, uint32_t sub_capture)
    : source(source), sub_capture(sub_capture) {}

std::string CaptureVersion::ToString() const {
  return base::StringPrintf("{.source = %u, .sub_capture = %u}", source,
                            sub_capture);
}

}  // namespace media
