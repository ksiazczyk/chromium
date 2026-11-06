// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gin Console module header
// summary: Declares the gin::Console class whose Register method adds a basic console.log API to a V8 object template.
// ---

#ifndef GIN_MODULES_CONSOLE_H_
#define GIN_MODULES_CONSOLE_H_

#include "gin/gin_export.h"
#include "v8/include/v8-forward.h"

namespace gin {

// The Console module provides a basic API for printing to stdout. Over time,
// we'd like to evolve the API to match window.console in browsers.
class GIN_EXPORT Console {
 public:
  static void Register(v8::Isolate* isolate,
                       v8::Local<v8::ObjectTemplate> templ);
};

}  // namespace gin

#endif  // GIN_MODULES_CONSOLE_H_
