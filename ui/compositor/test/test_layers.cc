// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Child layer names helper for tests
// summary: Provides ChildLayerNamesAsString, a helper that joins the names of a layer's child layers into a single string for test expectations.
// ---

#include "ui/compositor/test/test_layers.h"

#include "ui/compositor/layer.h"

namespace ui {
namespace test {

std::string ChildLayerNamesAsString(const ui::Layer& parent) {
  std::string names;
  for (const Layer* child : parent.children()) {
    if (!names.empty())
      names += " ";
    names += child->name();
  }
  return names;
}

}  // namespace test
}  // namespace ui
