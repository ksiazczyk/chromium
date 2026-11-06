// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Net export UI message handler constants
// summary: Defines string constants for the net-export UI message handler names such as startNetLog and stopNetLog and the info-changed event.
// ---

#include "components/net_log/net_export_ui_constants.h"

namespace net_log {

// Message handlers.
const char kEnableNotifyUIWithStateHandler[] = "enableNotifyUIWithState";
const char kSendNetLogHandler[] = "sendNetLog";
const char kShowFile[] = "showFile";
const char kStartNetLogHandler[] = "startNetLog";
const char kStopNetLogHandler[] = "stopNetLog";

// Other values.
const char kNetLogInfoChangedEvent[] = "net-log-info-changed";

}  // namespace net_log
