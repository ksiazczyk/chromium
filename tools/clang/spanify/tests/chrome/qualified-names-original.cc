// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify original test input for qualified global array names
// summary: Original test input using a namespace-qualified global C array through a raw pointer to verify spanify handles qualified names.
// ---

namespace ns {
int global_buf[10];
}

void DeclRefExprWithQualifiedName(int index) {
  // Expected rewrite:
  // base::span<int> p = base::span<int>(ns::global_buf)
  //                         .subspan(base::checked_cast<size_t>(index));
  int* p = &ns::global_buf[index];
  p[0] = 0;
}
