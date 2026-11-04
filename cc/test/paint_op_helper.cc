// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: PaintOp stream printing for tests
// summary: Implements PrintTo so PaintOp objects print their string form in gtest failure output.
// ---

#include "cc/test/paint_op_helper.h"
#include "cc/paint/paint_op.h"

namespace cc {

void PrintTo(const PaintOp& op, std::ostream* os) {
  *os << PaintOpHelper::ToString(&op);
}

}  // namespace cc
