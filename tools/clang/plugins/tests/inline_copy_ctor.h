// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Inline copy constructor test header
// summary: Header defining a struct with an inline static factory function, used by the inline copy constructor plugin test.
// ---

#ifndef INLINE_COPY_CTOR_H_
#define INLINE_COPY_CTOR_H_

struct C {
  C();
  ~C();

  static C foo() { return C(); }

  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p , q, r, s, t, u, v, w, x;
};

#endif  // INLINE_COPY_CTOR_H_
