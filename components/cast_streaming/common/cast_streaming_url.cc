// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast streaming media source URL helpers
// summary: Defines the data URL used as the cast streaming receiver media source and provides functions to get and recognize it.
// ---

#include "components/cast_streaming/common/public/cast_streaming_url.h"

#include "base/strings/string_util.h"

namespace cast_streaming {
namespace {

// TODO(crbug.com/40182730): Update this constant to a proper scheme.
constexpr char kCastStreamingReceiverUrl[] = "data:cast_streaming_receiver";

}  // namespace

GURL GetCastStreamingMediaSourceUrl() {
  return GURL(kCastStreamingReceiverUrl);
}

bool IsCastStreamingMediaSourceUrl(const GURL& url) {
  return url == kCastStreamingReceiverUrl;
}

}  // namespace cast_streaming
