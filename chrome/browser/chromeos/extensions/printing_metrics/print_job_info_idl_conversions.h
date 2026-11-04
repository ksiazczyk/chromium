// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for print job info proto to IDL conversion
// summary: Declares PrintJobInfoProtoToIdl, which converts an ash print job protobuf record into the extension API IDL PrintJobInfo type.
// ---

#ifndef CHROME_BROWSER_CHROMEOS_EXTENSIONS_PRINTING_METRICS_PRINT_JOB_INFO_IDL_CONVERSIONS_H_
#define CHROME_BROWSER_CHROMEOS_EXTENSIONS_PRINTING_METRICS_PRINT_JOB_INFO_IDL_CONVERSIONS_H_

#include "chrome/browser/ash/printing/history/print_job_info.pb.h"
#include "chrome/common/extensions/api/printing_metrics.h"

namespace extensions {

api::printing_metrics::PrintJobInfo PrintJobInfoProtoToIdl(
    const ash::printing::proto::PrintJobInfo& print_job_info_proto);

}  // namespace extensions

#endif  // CHROME_BROWSER_CHROMEOS_EXTENSIONS_PRINTING_METRICS_PRINT_JOB_INFO_IDL_CONVERSIONS_H_
