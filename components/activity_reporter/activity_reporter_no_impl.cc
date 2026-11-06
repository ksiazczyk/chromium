// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: No-op activity reporter
// summary: Implements a do-nothing ActivityReporter that is returned when activity reporting is disabled.
// ---

#include <memory>

#include "base/sequence_checker.h"
#include "components/activity_reporter/activity_reporter.h"

namespace activity_reporter {

namespace {

class ActivityReporterNoImpl : public ActivityReporter {
 public:
  ActivityReporterNoImpl() = default;
  void ReportActive() override {
    DCHECK_CALLED_ON_VALID_SEQUENCE(sequence_checker_);
    // Do nothing.
  }

 private:
  SEQUENCE_CHECKER(sequence_checker_);
};

}  // namespace

// Must be called on a SequencedTaskRunner.
std::unique_ptr<ActivityReporter> CreateActivityReporterDisabled() {
  return std::make_unique<ActivityReporterNoImpl>();
}

}  // namespace activity_reporter
