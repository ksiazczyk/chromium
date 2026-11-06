// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Spanify test input: class inheritance with out-of-line method'
// summary: Input with a virtual function taking char* and an out-of-line override, exercising span rewriting across an inheritance hierarchy.
// ---

#include <vector>

int UnsafeIndex();  // This function might return an out-of-bound index.

class Base {
 public:
  // Expected rewrite:
  // virtual void fct(base::span<char> param) = 0;
  virtual void fct(char* param) = 0;
};

class Derived : public Base {
 public:
  // Expected rewrite:
  // void fct(base::span<char> param) override;
  void fct(char* param) override;
};

// Expected rewrite:
// void Derived::fct(base::span<char> param) {
void Derived::fct(char* param) {
  // This unsafe usage leads param to be rewritten.
  param[UnsafeIndex()] = 'b';
}

void test() {
  std::vector<char> buf(10);
  Derived d;
  // Expected rewrite:
  // d.fct(buf);
  d.fct(buf.data());
}
