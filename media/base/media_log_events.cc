// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media log event helpers
// summary: Implements TruncateUrlString, a helper that shortens overly long URLs for media log event records.
// ---

#include "media/base/media_log_events.h"

#include <string>

#include "base/notreached.h"

namespace media {

std::string TruncateUrlString(const std::string& url) {
  if (url.length() > kMaxUrlLength) {
    // Take substring and _then_ replace, to avoid copying unused data.
    return url.substr(0, kMaxUrlLength)
        .replace(kMaxUrlLength - 3, kMaxUrlLength, "...");
  }
  return url;
}

}  // namespace media
