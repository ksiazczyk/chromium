// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for the diagnostics browser delegate implementation
// summary: Declares DiagnosticsBrowserDelegateImpl, the browser-side delegate that handles DiagnosticsApp requests such as resolving the active user's profile directory.
// ---

#ifndef CHROME_BROWSER_ASH_DIAGNOSTICS_DIAGNOSTICS_BROWSER_DELEGATE_IMPL_H_
#define CHROME_BROWSER_ASH_DIAGNOSTICS_DIAGNOSTICS_BROWSER_DELEGATE_IMPL_H_

#include "ash/system/diagnostics/diagnostics_browser_delegate.h"

namespace base {
class FilePath;
}

namespace ash {
namespace diagnostics {

// DiagnosticsAppBrowserDelegateImpl implementation which handles browser
// requests for the DiagnosticsApp system.
class DiagnosticsBrowserDelegateImpl final : public DiagnosticsBrowserDelegate {
 public:
  DiagnosticsBrowserDelegateImpl() = default;
  DiagnosticsBrowserDelegateImpl(const DiagnosticsBrowserDelegateImpl&) =
      delete;
  DiagnosticsBrowserDelegateImpl& operator=(
      const DiagnosticsBrowserDelegateImpl&) = delete;
  ~DiagnosticsBrowserDelegateImpl() override = default;

  // DiagnosticsBrowserDelegate:
  base::FilePath GetActiveUserProfileDir() override;
};

}  // namespace diagnostics
}  // namespace ash

#endif  // CHROME_BROWSER_ASH_DIAGNOSTICS_DIAGNOSTICS_BROWSER_DELEGATE_IMPL_H_
