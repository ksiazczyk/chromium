// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Dialog model example header
// summary: Declares DialogModelExample, an example demonstrating dialogs built through the ui::DialogModel API.
// ---

#ifndef UI_VIEWS_EXAMPLES_DIALOG_MODEL_EXAMPLE_H_
#define UI_VIEWS_EXAMPLES_DIALOG_MODEL_EXAMPLE_H_

#include "ui/views/examples/example_base.h"

namespace views::examples {

class VIEWS_EXAMPLES_EXPORT DialogModelExample : public ExampleBase {
 public:
  DialogModelExample();
  DialogModelExample(const DialogModelExample&) = delete;
  DialogModelExample& operator=(const DialogModelExample&) = delete;
  ~DialogModelExample() override;

  // ExampleBase:
  void CreateExampleView(View* container) override;

 private:
  void ShowDialog();

  raw_ptr<View> show_dialog_button_ = nullptr;
};

}  // namespace views::examples

#endif  // UI_VIEWS_EXAMPLES_DIALOG_MODEL_EXAMPLE_H_
