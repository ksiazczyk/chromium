// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AXAttributes string trait defaults
// summary: Provides the default empty-string specialization for object attribute traits used by the AXAttributes collection.
// ---

#include "ui/accessibility/ax_attributes.h"

#include "base/strings/string_util.h"

namespace ui {

template <>
const std::string& ObjectAttributeTraits<std::string>::GetDefault() {
  return base::EmptyString();
}

}  // namespace ui
