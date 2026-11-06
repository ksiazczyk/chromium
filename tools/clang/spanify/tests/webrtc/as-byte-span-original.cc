// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Byte span original input
// summary: Original input for the byte-span test, using raw and const byte pointers from reinterpret_cast that should become std::span<std::byte>.
// ---

#include <cstddef>
#include <tuple>

namespace webrtc {

void fct() {
  int buf[10];
  // Expected rewrite:
  // std::span<std::byte> as_byte_span = reinterpret_cast<std::byte*>(buf);
  std::byte* as_byte_span = reinterpret_cast<std::byte*>(buf);

  as_byte_span[4] = std::byte{'c'};

  // Expected rewrite:
  // std::span<const std::byte> as_const_byte_span = reinterpret_cast<const
  // std::byte*>(buf);
  const std::byte* as_const_byte_span = reinterpret_cast<const std::byte*>(buf);

  std::byte c = as_const_byte_span[4];
  std::ignore = c;
}

}  // namespace webrtc
