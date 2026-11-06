// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Error message formatting interface
// summary: Declares ErrorUtils static helpers for formatting extension error messages with placeholder substitution in UTF-8 and UTF-16.
// ---

#ifndef EXTENSIONS_COMMON_ERROR_UTILS_H_
#define EXTENSIONS_COMMON_ERROR_UTILS_H_

#include <string>
#include <string_view>

#include "base/containers/span.h"

namespace extensions {

class ErrorUtils {
 public:
  static std::string FormatErrorMessage(
      std::string_view format,
      base::span<const std::string_view> args);

  template <typename... Args>
  static std::string FormatErrorMessage(std::string_view format,
                                        std::string_view s1,
                                        const Args&... args) {
    const std::string_view pieces[] = {s1, args...};
    return FormatErrorMessage(format, pieces);
  }

  static std::u16string FormatErrorMessageUTF16(
      std::string_view format,
      base::span<const std::string_view> args);

  template <typename... Args>
  static std::u16string FormatErrorMessageUTF16(std::string_view format,
                                                std::string_view s1,
                                                const Args&... args) {
    const std::string_view pieces[] = {s1, args...};
    return FormatErrorMessageUTF16(format, pieces);
  }
};

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_ERROR_UTILS_H_
