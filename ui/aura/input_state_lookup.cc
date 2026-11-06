// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InputStateLookup default factory
// summary: Provides the default InputStateLookup::Create implementation that returns null on platforms without support.
// ---

#include "ui/aura/input_state_lookup.h"

namespace aura {

// static
std::unique_ptr<InputStateLookup> InputStateLookup::Create() {
  return nullptr;
}

}  // namespace aura
