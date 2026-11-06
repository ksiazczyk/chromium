// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Textarea example class declaration
// summary: Declares TextareaExample, a Views example that displays a textarea with sample text.
// ---

#ifndef UI_VIEWS_EXAMPLES_TEXTAREA_EXAMPLE_H_
#define UI_VIEWS_EXAMPLES_TEXTAREA_EXAMPLE_H_

#include "ui/views/examples/example_base.h"

namespace views::examples {

class VIEWS_EXAMPLES_EXPORT TextareaExample : public ExampleBase {
 public:
  TextareaExample();
  ~TextareaExample() override = default;

  // ExampleBase:
  void CreateExampleView(View* container) override;
};

}  // namespace views::examples

#endif  // UI_VIEWS_EXAMPLES_TEXTAREA_EXAMPLE_H_
