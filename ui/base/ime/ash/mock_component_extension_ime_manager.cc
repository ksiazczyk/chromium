// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock component extension IME manager implementation
// summary: Implements a mock component extension IME manager that returns an empty XKB input method descriptor list for tests.
// ---

#include "ui/base/ime/ash/mock_component_extension_ime_manager.h"

namespace ash {

input_method::InputMethodDescriptors
MockComponentExtensionIMEManager::GetXkbIMEAsInputMethodDescriptor() {
  return input_method::InputMethodDescriptors();
}

}  // namespace ash
