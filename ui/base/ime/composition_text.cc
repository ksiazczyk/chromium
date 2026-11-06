// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CompositionText implementation
// summary: Implements the default constructors and destructor of the CompositionText struct.
// ---

#include "ui/base/ime/composition_text.h"

namespace ui {

CompositionText::CompositionText() = default;

CompositionText::CompositionText(const CompositionText& other) = default;

CompositionText::~CompositionText() = default;

}  // namespace ui
