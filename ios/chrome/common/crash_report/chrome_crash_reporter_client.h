// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeCrashReporterClient class declaration
// summary: Declares the crash reporter client subclass overriding crash dump location, stats consent, and unattended behavior for iOS Chrome.
// ---

#ifndef IOS_CHROME_COMMON_CRASH_REPORT_CHROME_CRASH_REPORTER_CLIENT_H_
#define IOS_CHROME_COMMON_CRASH_REPORT_CHROME_CRASH_REPORTER_CLIENT_H_

#include "base/no_destructor.h"
#include "components/crash/core/app/crash_reporter_client.h"

class ChromeCrashReporterClient : public crash_reporter::CrashReporterClient {
 public:
  static void Create();

  // crash_reporter::CrashReporterClient implementation.
  bool GetCrashDumpLocation(base::FilePath* crash_dir) override;
  bool GetCollectStatsConsent() override;
  bool IsRunningUnattended() override;

 private:
  friend class base::NoDestructor<ChromeCrashReporterClient>;

  ChromeCrashReporterClient();
  ChromeCrashReporterClient(const ChromeCrashReporterClient&) = delete;
  ChromeCrashReporterClient& operator=(const ChromeCrashReporterClient&) =
      delete;
  ~ChromeCrashReporterClient() override;
};

#endif  // IOS_CHROME_COMMON_CRASH_REPORT_CHROME_CRASH_REPORTER_CLIENT_H_
