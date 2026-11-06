// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock component extension IME manager delegate implementation
// summary: Implements a mock IME manager delegate that serves a configurable IME list and login layout allowlist while recording load calls.
// ---

#include "ui/base/ime/ash/mock_component_extension_ime_manager_delegate.h"

#include "ui/base/ime/ash/component_extension_ime_manager.h"

namespace ash {
namespace input_method {

MockComponentExtensionIMEManagerDelegate::
    MockComponentExtensionIMEManagerDelegate() = default;
MockComponentExtensionIMEManagerDelegate::
    ~MockComponentExtensionIMEManagerDelegate() = default;

std::vector<ComponentExtensionIME>
MockComponentExtensionIMEManagerDelegate::ListIME() {
  return ime_list_;
}

void MockComponentExtensionIMEManagerDelegate::Load(
    content::BrowserContext* profile,
    const std::string& extension_id,
    const std::string& manifest,
    const base::FilePath& path) {
  load_call_count_++;
  last_loaded_extension_id_ = extension_id;
}

bool MockComponentExtensionIMEManagerDelegate::IsInLoginLayoutAllowlist(
    const std::string& layout) {
  return login_layout_set_.find(layout) != login_layout_set_.end();
}

}  // namespace input_method
}  // namespace ash
