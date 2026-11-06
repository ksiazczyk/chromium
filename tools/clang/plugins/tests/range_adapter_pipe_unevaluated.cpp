// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// The only call of a std::ranges::operator| in this file is in an unevaluated
// operand, to a function that is only declared.

// ---docerion
// type: test
// title: Range adapter pipe unevaluated operand test
// summary: Test input checking that a std::ranges operator| call in an unevaluated operand is still banned by the plugin.
// ---

namespace std::ranges {
struct closure {};
int operator|(int, closure);
}  // namespace std::ranges

// Warning expected.
using Type = decltype(1 | std::ranges::closure());
