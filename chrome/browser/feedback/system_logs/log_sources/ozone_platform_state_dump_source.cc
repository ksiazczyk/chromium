// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OzonePlatformStateDumpSource implementation
// summary: Implements a system logs source that dumps the Ozone platform state into the ozone-platform-state feedback log entry.
// ---

#include "chrome/browser/feedback/system_logs/log_sources/ozone_platform_state_dump_source.h"

#include <memory>
#include <sstream>

#include "ui/ozone/public/ozone_platform.h"

namespace system_logs {

OzonePlatformStateDumpSource::OzonePlatformStateDumpSource()
    : SystemLogsSource("OzonePlatformStateDump") {}

void OzonePlatformStateDumpSource::Fetch(SysLogsSourceCallback callback) {
  std::ostringstream out;
  CHECK(ui::OzonePlatform::GetInstance());
  ui::OzonePlatform::GetInstance()->DumpState(out);
  auto response = std::make_unique<SystemLogsResponse>();
  response->emplace("ozone-platform-state", out.str());
  std::move(callback).Run(std::move(response));
}

}  // namespace system_logs
