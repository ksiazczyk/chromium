// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safe browsing delegate implementation
// summary: Provides default stub implementations of the SafeBrowsingDelegate, reporting the extension telemetry service as disabled.
// ---

#include "extensions/browser/safe_browsing_delegate.h"

namespace extensions {

SafeBrowsingDelegate::SafeBrowsingDelegate() = default;

SafeBrowsingDelegate::~SafeBrowsingDelegate() = default;

bool SafeBrowsingDelegate::IsExtensionTelemetryServiceEnabled(
    content::BrowserContext* context) const {
  return false;
}

}  // namespace extensions
