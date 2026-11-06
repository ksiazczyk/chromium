// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Logging service struct implementation
// summary: Implements constructors and destructor for the ReportSessionDisconnectedRequestStruct used by the internal logging service.
// ---

#include "remoting/proto/logging_service.h"

namespace remoting::internal {

ReportSessionDisconnectedRequestStruct::
    ReportSessionDisconnectedRequestStruct() = default;
ReportSessionDisconnectedRequestStruct::ReportSessionDisconnectedRequestStruct(
    const ReportSessionDisconnectedRequestStruct&) = default;
ReportSessionDisconnectedRequestStruct::
    ~ReportSessionDisconnectedRequestStruct() = default;

}  // namespace remoting::internal
