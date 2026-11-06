// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LoadTimingInfo implementation
// summary: Implements the LoadTimingInfo and ConnectTiming constructors and destructors for request timing data.
// ---

#include "net/base/load_timing_info.h"

#include "net/log/net_log_source.h"

namespace net {

LoadTimingInfo::ConnectTiming::ConnectTiming() = default;

LoadTimingInfo::ConnectTiming::~ConnectTiming() = default;

LoadTimingInfo::LoadTimingInfo() : socket_log_id(NetLogSource::kInvalidId) {}

LoadTimingInfo::LoadTimingInfo(const LoadTimingInfo& other) = default;

LoadTimingInfo::~LoadTimingInfo() = default;

}  // namespace net
