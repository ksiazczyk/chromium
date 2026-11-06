// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Child layer names helper header
// summary: Declares ChildLayerNamesAsString, a test helper returning the names of a parent layer's children as a space-separated string.
// ---

#ifndef UI_COMPOSITOR_TEST_TEST_LAYERS_H_
#define UI_COMPOSITOR_TEST_TEST_LAYERS_H_

#include <string>

namespace ui {
class Layer;

namespace test {

// Returns a string containing the name of each of the child layers (bottommost
// first) of |parent|. The format of the string is "name1 name2 ..."
std::string ChildLayerNamesAsString(const ui::Layer& parent);

}  // namespace test
}  // namespace ui

#endif  // UI_COMPOSITOR_TEST_TEST_LAYERS_H_
