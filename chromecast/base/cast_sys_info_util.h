// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CastSysInfo factory utility header
// summary: Declares CreateSysInfo(), the factory function that returns the platform-specific CastSysInfo instance.
// ---

#ifndef CHROMECAST_BASE_CAST_SYS_INFO_UTIL_H_
#define CHROMECAST_BASE_CAST_SYS_INFO_UTIL_H_

#include <memory>
#include <vector>

namespace chromecast {

class CastSysInfo;

std::unique_ptr<CastSysInfo> CreateSysInfo();

}  // namespace chromecast

#endif  // CHROMECAST_BASE_CAST_SYS_INFO_UTIL_H_
