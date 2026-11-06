// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GrammarFragment implementation
// summary: Implements the constructors and destructor of the GrammarFragment struct for grammar edit suggestions.
// ---

#include "ui/base/ime/grammar_fragment.h"

namespace ui {

GrammarFragment::GrammarFragment(const gfx::Range& range,
                                 const std::string& suggestion)
    : range(range), suggestion(suggestion) {}

GrammarFragment::GrammarFragment(const GrammarFragment& other) = default;

GrammarFragment::~GrammarFragment() = default;

}  // namespace ui
