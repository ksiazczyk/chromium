// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeCrashReporterClient implementation
// summary: Implements the iOS Chrome crash reporter client, returning the Crashpad dump location and upload consent from the crash helper.
// ---

#include "ios/chrome/common/crash_report/chrome_crash_reporter_client.h"

#include "base/files/file_path.h"
#include "base/no_destructor.h"
#include "ios/chrome/common/crash_report/crash_helper.h"

void ChromeCrashReporterClient::Create() {
  static base::NoDestructor<ChromeCrashReporterClient> crash_client;
  crash_reporter::SetCrashReporterClient(crash_client.get());
}

ChromeCrashReporterClient::ChromeCrashReporterClient() {}

ChromeCrashReporterClient::~ChromeCrashReporterClient() {}

bool ChromeCrashReporterClient::GetCrashDumpLocation(
    base::FilePath* crash_dir) {
  *crash_dir = crash_helper::common::CrashpadDumpLocation();
  return true;
}

bool ChromeCrashReporterClient::GetCollectStatsConsent() {
  return crash_helper::common::UserEnabledUploading();
}

bool ChromeCrashReporterClient::IsRunningUnattended() {
  return false;
}
