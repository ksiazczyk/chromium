// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LazyStringBuilder implementation
// summary: Implements LazyStringBuilder methods that append string views or values and build the result with StrCat.
// ---

#include "base/strings/lazy_string_builder.h"

#include "base/strings/strcat.h"

namespace base {

// static
LazyStringBuilder LazyStringBuilder::CreateForTesting() {
  return LazyStringBuilder({});
}

LazyStringBuilder::LazyStringBuilder(AccessKey) {}

LazyStringBuilder::~LazyStringBuilder() = default;

void LazyStringBuilder::AppendByReference(std::string_view view) {
  views_.push_back(view);
}

void LazyStringBuilder::AppendByValue(std::string string) {
  scratch_.push_back(std::move(string));
  views_.push_back(scratch_.back());
}

void LazyStringBuilder::AppendInternal(
    std::initializer_list<std::string_view> views) {
  views_.insert(views_.end(), views);
}

std::string LazyStringBuilder::Build() const {
  return StrCat(views_);
}

}  // namespace base
