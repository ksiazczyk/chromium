// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Report unsafe site dialog Android stub
// summary: Android stub for the report-unsafe-site dialog that reports the feature as disabled and never shows the dialog.
// ---

#include "chrome/browser/feedback/report_unsafe_site_dialog.h"

#include "base/notreached.h"

namespace feedback {

// static
bool ReportUnsafeSiteDialog::IsEnabled(const Profile& profile) {
  // Not currently implemented on Android.
  return false;
}

// static
void ReportUnsafeSiteDialog::Show(BrowserWindowInterface* browser) {
  NOTREACHED();
}

}  // namespace feedback
