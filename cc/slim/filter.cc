// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Slim compositor filter implementation
// summary: Implements the cc::slim Filter class, defining its constructor, destructor and equality comparison for layer filter effects.
// ---

#include "cc/slim/filter.h"

namespace cc::slim {

Filter::Filter(Type type, float amount) : type_(type), amount_(amount) {}

Filter::Filter(const Filter&) = default;

Filter& Filter::operator=(const Filter&) = default;

Filter::~Filter() = default;

bool Filter::operator==(const Filter& other) const {
  return type_ == other.type_ && amount_ == other.amount_ &&
         tile_mode_ == other.tile_mode_;
}

}  // namespace cc::slim
