// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementations of Windows signal data types
// summary: Implements equality operators and base::Value serialization for the AvProduct and InstalledHotfix structs used by Windows device signals.
// ---

#include "components/device_signals/core/common/win/win_types.h"

#include "base/values.h"

namespace device_signals {

bool AvProduct::operator==(const AvProduct& other) const {
  return display_name == other.display_name && state == other.state;
}

base::Value AvProduct::ToValue() const {
  base::DictValue values;
  values.Set("displayName", display_name);
  values.Set("state", static_cast<int>(state));
  return base::Value(std::move(values));
}

bool InstalledHotfix::operator==(const InstalledHotfix& other) const {
  return hotfix_id == other.hotfix_id;
}

base::Value InstalledHotfix::ToValue() const {
  base::DictValue values;
  values.Set("hotfixId", hotfix_id);
  return base::Value(std::move(values));
}

}  // namespace device_signals
