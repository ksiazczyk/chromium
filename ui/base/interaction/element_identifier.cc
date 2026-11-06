// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stream output for ElementContext
// summary: Implements PrintTo and the ostream operator for ElementContext to aid test failure output.
// ---

#include "ui/base/interaction/element_identifier.h"

#include <string_view>

#include "base/check.h"
#include "base/compiler_specific.h"
#include "base/no_destructor.h"

namespace ui {

void PrintTo(ElementContext element_context, std::ostream* os) {
  *os << "ElementContext " << static_cast<const void*>(element_context);
}

std::ostream& operator<<(std::ostream& os, ElementContext element_context) {
  PrintTo(element_context, &os);
  return os;
}

}  // namespace ui
