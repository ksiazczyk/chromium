// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: V8 handler function wrapper implementation
// summary: Implements RunV8, adapting V8 function callback arguments into gin Arguments for wrapped handler functions.
// ---

#include "ui/accessibility/platform/automation/v8_handler_function_wrapper.h"

#include "gin/arguments.h"

namespace ui {

void V8HandlerFunctionWrapper::RunV8(
    const v8::FunctionCallbackInfo<v8::Value>& args) {
  gin::Arguments arguments(args);
  Run(&arguments);
}

}  // namespace ui
