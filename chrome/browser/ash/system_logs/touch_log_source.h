// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Touch log source header
// summary: Declares TouchLogSource, a system logs source named "Touch" that fetches touch-related log data for ChromeOS feedback reports.
// ---

#ifndef CHROME_BROWSER_ASH_SYSTEM_LOGS_TOUCH_LOG_SOURCE_H_
#define CHROME_BROWSER_ASH_SYSTEM_LOGS_TOUCH_LOG_SOURCE_H_

#include "components/feedback/system_logs/system_logs_source.h"

namespace system_logs {

class TouchLogSource : public SystemLogsSource {
 public:
  TouchLogSource() : SystemLogsSource("Touch") {}

  TouchLogSource(const TouchLogSource&) = delete;
  TouchLogSource& operator=(const TouchLogSource&) = delete;

  ~TouchLogSource() override = default;

 private:
  // Overridden from SystemLogsSource:
  void Fetch(SysLogsSourceCallback callback) override;
};

}  // namespace system_logs

#endif  // CHROME_BROWSER_ASH_SYSTEM_LOGS_TOUCH_LOG_SOURCE_H_
