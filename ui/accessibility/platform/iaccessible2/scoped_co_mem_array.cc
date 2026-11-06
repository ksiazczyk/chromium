// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedCoMemArray free-contents specializations
// summary: Implements FreeContents template specializations that release COM references held by IA2TextSelection elements and IUnknown pointers in ScopedCoMemArray arrays.
// ---

#include "ui/accessibility/platform/iaccessible2/scoped_co_mem_array.h"

#include <unknwn.h>

#include <algorithm>

#include "base/containers/span.h"
#include "third_party/iaccessible2/ia2_api_all.h"

namespace ui {

template <>
void ScopedCoMemArray<IA2TextSelection>::FreeContents(
    base::span<const IA2TextSelection> contents) {
  for (const auto& selection : contents) {
    if (selection.startObj) {
      selection.startObj->Release();
    }
    if (selection.endObj) {
      selection.endObj->Release();
    }
  }
}

template <>
void ScopedCoMemArray<IUnknown*>::FreeContents(
    base::span<IUnknown* const> contents) {
  std::ranges::for_each(contents, &IUnknown::Release);
}

}  // namespace ui
