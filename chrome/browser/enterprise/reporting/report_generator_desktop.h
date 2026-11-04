// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop report generator delegate header
// summary: Declares ReportGeneratorDesktop, the desktop implementation of the report generator delegate that sets Android app infos in report requests.
// ---

#ifndef CHROME_BROWSER_ENTERPRISE_REPORTING_REPORT_GENERATOR_DESKTOP_H_
#define CHROME_BROWSER_ENTERPRISE_REPORTING_REPORT_GENERATOR_DESKTOP_H_

#include "components/enterprise/browser/reporting/report_generator.h"

namespace enterprise_reporting {

/**
 * Desktop implementation of the report generator delegate.
 */
class ReportGeneratorDesktop : public ReportGenerator::Delegate {
 public:
  ReportGeneratorDesktop() = default;
  ReportGeneratorDesktop(const ReportGeneratorDesktop&) = delete;
  ReportGeneratorDesktop& operator=(const ReportGeneratorDesktop&) = delete;
  ~ReportGeneratorDesktop() override = default;

  // ReportGenerator::Delegate implementation.
  void SetAndroidAppInfos(ReportRequest* basic_request) override;
};

}  // namespace enterprise_reporting

#endif  // CHROME_BROWSER_ENTERPRISE_REPORTING_REPORT_GENERATOR_DESKTOP_H_
