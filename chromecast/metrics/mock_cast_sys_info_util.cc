// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock Cast system info utility implementation
// summary: Implements a mock CastSysInfo factory that returns a dummy system info object and counts how many times it was created.
// ---

#include "chromecast/metrics/mock_cast_sys_info_util.h"

#include "chromecast/base/cast_sys_info_dummy.h"

namespace chromecast {

static int times_sys_info_created_ = 0;

int GetSysInfoCreatedCount() {
  return times_sys_info_created_;
}

std::unique_ptr<CastSysInfo> CreateSysInfo() {
  times_sys_info_created_ += 1;
  return std::make_unique<CastSysInfoDummy>();
}

}  // namespace chromecast