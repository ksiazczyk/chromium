// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock print job history service implementation
// summary: Implements the mock print job history service, notifying observers of finished print jobs without persisting them.
// ---

#include "chrome/browser/ash/printing/history/mock_print_job_history_service.h"

namespace ash {

MockPrintJobHistoryService::MockPrintJobHistoryService() = default;

MockPrintJobHistoryService::~MockPrintJobHistoryService() = default;

void MockPrintJobHistoryService::SavePrintJobProto(
    const printing::proto::PrintJobInfo& print_job_info) {
  for (auto& observer : observers_) {
    observer.OnPrintJobFinished(print_job_info);
  }
}

}  // namespace ash
