// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of the stability report minidump stream data source
// summary: Serializes a StabilityReport and serves its bytes to the crashpad minidump writer as a user extension stream.
// ---

#include "components/stability_report/stability_report_data_source.h"

#include "third_party/crashpad/crashpad/minidump/minidump_user_extension_stream_data_source.h"

namespace stability_report {

StabilityReportDataSource::StabilityReportDataSource(
    const StabilityReport& report)
    : crashpad::MinidumpUserExtensionStreamDataSource(kStreamType),
      data_(report.SerializeAsString()) {
  // On error, SerializeAsString() will return an empty string which will
  // cause ReadStreamData() to harmlessly return no data.
}

size_t StabilityReportDataSource::StreamDataSize() {
  return data_.size();
}

bool StabilityReportDataSource::ReadStreamData(Delegate* delegate) {
  return delegate->ExtensionStreamDataSourceRead(data_.data(), data_.size());
}

}  // namespace stability_report
