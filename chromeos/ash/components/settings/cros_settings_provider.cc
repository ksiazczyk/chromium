// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CrosSettingsProvider base implementation
// summary: Implements observer notification and callback registration for the CrosSettingsProvider base class.
// ---

#include "chromeos/ash/components/settings/cros_settings_provider.h"

#include "base/command_line.h"
#include "base/strings/string_util.h"
#include "base/values.h"

namespace ash {

CrosSettingsProvider::CrosSettingsProvider(
    const NotifyObserversCallback& notify_cb)
    : notify_cb_(notify_cb) {}

CrosSettingsProvider::~CrosSettingsProvider() = default;

void CrosSettingsProvider::NotifyObservers(const std::string& path) {
  if (!notify_cb_.is_null())
    notify_cb_.Run(path);
}

void CrosSettingsProvider::SetNotifyObserversCallback(
    const NotifyObserversCallback& notify_cb) {
  notify_cb_ = notify_cb;
}

}  // namespace ash
