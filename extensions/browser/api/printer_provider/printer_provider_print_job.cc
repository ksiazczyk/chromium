// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PrinterProviderPrintJob implementation
// summary: Implements the default constructors, move assignment and destructor of the PrinterProviderPrintJob struct used to forward print jobs to extensions.
// ---

#include "extensions/browser/api/printer_provider/printer_provider_print_job.h"

namespace extensions {

PrinterProviderPrintJob::PrinterProviderPrintJob() = default;

PrinterProviderPrintJob::PrinterProviderPrintJob(
    PrinterProviderPrintJob&& other) = default;

PrinterProviderPrintJob& PrinterProviderPrintJob::operator=(
    PrinterProviderPrintJob&& other) = default;

PrinterProviderPrintJob::~PrinterProviderPrintJob() = default;

}  // namespace extensions
