// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Runner base class implementation
// summary: Implements the Runner constructor, destructor, and Scope that enters the runner's V8 isolate and context.
// ---

#include "gin/runner.h"

namespace gin {

Runner::Runner() {}

Runner::~Runner() = default;

Runner::Scope::Scope(Runner* runner)
    : isolate_scope_(runner->GetContextHolder()->isolate()),
      handle_scope_(runner->GetContextHolder()->isolate()),
      scope_(runner->GetContextHolder()->context()) {
}

Runner::Scope::~Scope() = default;

}  // namespace gin
