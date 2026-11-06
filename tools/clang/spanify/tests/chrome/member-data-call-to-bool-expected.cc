// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify member data call to bool expected test
// summary: Expected output of the spanify test checking that member data calls used in boolean contexts are not rewritten to spans.
// ---

#include <string_view>

struct MyBuffer {
  char* data_;

  // Add size and data methods so it matches "member_data_call".
  int size() const { return 0; }
  char* data() { return data_; }
};

void fct(MyBuffer* buf) {
  // Regression test. DecaySpanToBooleanOp shall not be called for
  // "member_data_call".
  std::string_view external_content;
  // No rewrite expected.
  if (external_content.data()) {
  }
  MyBuffer* buffer = nullptr;
  // No rewrite expected.
  if (buffer->data()) {
  }
}
