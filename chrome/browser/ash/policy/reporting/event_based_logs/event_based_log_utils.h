// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Event based log utilities header
// summary: Declares GenerateEventBasedLogUploadId, which creates a GUID identifying a log upload for server-side correlation.
// ---

#ifndef CHROME_BROWSER_ASH_POLICY_REPORTING_EVENT_BASED_LOGS_EVENT_BASED_LOG_UTILS_H_
#define CHROME_BROWSER_ASH_POLICY_REPORTING_EVENT_BASED_LOGS_EVENT_BASED_LOG_UTILS_H_

#include <string>

namespace policy {

// Generated a GUID to identify the log upload. This upload ID can be used in
// server to connect the events with the log files. It'll use
// base::uuid::GenerateRandomV4() to create this ID.
std::string GenerateEventBasedLogUploadId();

}  // namespace policy

#endif  // CHROME_BROWSER_ASH_POLICY_REPORTING_EVENT_BASED_LOGS_EVENT_BASED_LOG_UTILS_H_
