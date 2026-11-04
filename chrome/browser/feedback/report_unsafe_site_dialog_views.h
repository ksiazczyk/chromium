// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Report unsafe site dialog Views identifiers
// summary: Declares element identifiers used to locate the report-unsafe-site dialog and its webview in Views-based UI tests.
// ---

#ifndef CHROME_BROWSER_FEEDBACK_REPORT_UNSAFE_SITE_DIALOG_VIEWS_H_
#define CHROME_BROWSER_FEEDBACK_REPORT_UNSAFE_SITE_DIALOG_VIEWS_H_

#include "ui/base/interaction/element_identifier.h"

namespace feedback {

DECLARE_ELEMENT_IDENTIFIER_VALUE(kReportUnsafeSiteWebviewElementId);

class ReportUnsafeSiteDialogViews {
 public:
  DECLARE_CLASS_ELEMENT_IDENTIFIER_VALUE(kReportUnsafeSiteDialogId);

  ReportUnsafeSiteDialogViews() = delete;
  ~ReportUnsafeSiteDialogViews() = delete;
};

}  // namespace feedback

#endif  // CHROME_BROWSER_FEEDBACK_REPORT_UNSAFE_SITE_DIALOG_VIEWS_H_
