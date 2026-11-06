// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ExampleComboboxModel implementation
// summary: Implements the example combobox model, returning item count and UTF16 item text from a fixed list of strings.
// ---

#include "ui/views/examples/example_combobox_model.h"

#include "base/strings/utf_string_conversions.h"

namespace views::examples {

ExampleComboboxModel::ExampleComboboxModel(base::span<const char* const> items)
    : items_(items) {}

ExampleComboboxModel::~ExampleComboboxModel() = default;

size_t ExampleComboboxModel::GetItemCount() const {
  return items_.size();
}

std::u16string ExampleComboboxModel::GetItemAt(size_t index) const {
  return base::ASCIIToUTF16(items_[index]);
}

}  // namespace views::examples
