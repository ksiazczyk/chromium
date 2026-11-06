// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: StabilityReportReader test implementation
// summary: Implements StabilityReportReader methods that parse a StabilityReport from Crashpad minidump extension stream data.
// ---

#include "components/stability_report/test/stability_report_reader.h"

namespace stability_report::test {

const StabilityReport& StabilityReportReader::report() const {
  return report_;
}

bool StabilityReportReader::ExtensionStreamDataSourceRead(const void* data,
                                                          size_t size) {
  return report_.ParseFromArray(data, size);
}

}  // namespace stability_report::test
