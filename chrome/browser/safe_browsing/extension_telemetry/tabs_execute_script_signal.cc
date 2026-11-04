// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tabs executeScript signal implementation
// summary: Implements TabsExecuteScriptSignal, which captures tabs.executeScript invocations and stores a SHA-256 hash of the executed script code.
// ---

#include "chrome/browser/safe_browsing/extension_telemetry/tabs_execute_script_signal.h"

#include "crypto/sha2.h"

namespace safe_browsing {

TabsExecuteScriptSignal::TabsExecuteScriptSignal(
    const extensions::ExtensionId& extension_id,
    const std::string& script_code)
    : ExtensionSignal(extension_id),
      script_hash_(crypto::SHA256HashString(script_code)) {}

TabsExecuteScriptSignal::~TabsExecuteScriptSignal() = default;

ExtensionSignalType TabsExecuteScriptSignal::GetType() const {
  return ExtensionSignalType::kTabsExecuteScript;
}

}  // namespace safe_browsing
