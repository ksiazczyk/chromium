// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify expected output for qualified global array names
// summary: Expected spanify rewrite wrapping a namespace-qualified global array in base::span with a checked_cast subspan for indexed access.
// ---

#include <array>
#include <cstdint>

#include "base/containers/span.h"
#include "base/numerics/safe_conversions.h"

namespace ns {
std::array<int, 10> global_buf;
}

void DeclRefExprWithQualifiedName(int index) {
  // Expected rewrite:
  // base::span<int> p = base::span<int>(ns::global_buf)
  //                         .subspan(base::checked_cast<size_t>(index));
  base::span<int> p = base::span<int>(ns::global_buf)
                          .subspan(base::checked_cast<size_t>(index));
  p[0] = 0;
}
