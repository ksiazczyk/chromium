// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Expected output for passed-to-move rewriter test
// summary: Expected result of the passed-to-move rewriter test where base::Passed arguments are replaced with std::move, including pointer dereference cases.
// ---

#include "base/functional/bind.h"
#include "callback.h"

void Test() {
  using base::BindOnce;
  using base::Passed;
  int i = 0;
  int* p = nullptr;

  // Passed takes a pointer and the address is taken here.
  // Remove `&` and replace base::Passed with std::move.
  base::BindOnce([] {}, std::move(i));

  // Passed takes a pointer. Replace base::Passed with std::move plus deref.
  base::BindOnce([] {}, std::move(*p));

  // The parameter is already rvalue-reference. Just remove base::Passed.
  // Plus, check if unqualified names work.
  base::BindOnce([] {}, std::move(*p));
  BindOnce([] {}, 1);
}
