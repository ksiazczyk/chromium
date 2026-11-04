// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub network diagnostics dialog implementation
// summary: Stub implementation that reports the diagnostics dialog as unavailable and never shows it on platforms without support.
// ---

#include "chrome/browser/net/net_error_diagnostics_dialog.h"

#include "base/notreached.h"

bool CanShowNetworkDiagnosticsDialog(content::WebContents* web_contents) {
  return false;
}

void ShowNetworkDiagnosticsDialog(content::WebContents* web_contents,
                                  const std::string& failed_url) {
  NOTREACHED();
}
