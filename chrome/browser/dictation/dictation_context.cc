// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DictationContext implementation
// summary: Implements the default constructors, move operations and destructor of the DictationContext struct.
// ---

#include "chrome/browser/dictation/dictation_context.h"

namespace dictation {

DictationContext::DictationContext() = default;
DictationContext::DictationContext(DictationContext&&) = default;
DictationContext& DictationContext::operator=(DictationContext&&) = default;
DictationContext::~DictationContext() = default;

}  // namespace dictation
