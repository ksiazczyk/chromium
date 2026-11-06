// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: V8ValueConverter interface header
// summary: Declares the V8ValueConverter abstract interface for converting between base::Value and V8 values, keeping the PDF component decoupled from the content layer.
// ---

#ifndef PDF_V8_VALUE_CONVERTER_H_
#define PDF_V8_VALUE_CONVERTER_H_

#include <memory>

#include "v8/include/v8-forward.h"

namespace base {
class Value;
}  // namespace base

namespace chrome_pdf {

// Abstraction layer for base::Value from/to V8::Value conversions.
// Necessary because //pdf should not directly depend on //content. If the V8
// V8 value conversion code ever moves into Blink, remove this and use the
// conversion code from Blink directly.

class V8ValueConverter {
 public:
  virtual std::unique_ptr<base::Value> FromV8Value(
      v8::Local<v8::Value> value,
      v8::Local<v8::Context> context) = 0;

 protected:
  ~V8ValueConverter() = default;
};

}  // namespace chrome_pdf

#endif  // PDF_V8_VALUE_CONVERTER_H_
