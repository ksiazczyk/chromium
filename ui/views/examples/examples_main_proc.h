// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Views Examples main procedure header
// summary: Declares ExamplesMainProc, which runs the Views Examples window and returns an exit code, optionally running under test.
// ---

#ifndef UI_VIEWS_EXAMPLES_EXAMPLES_MAIN_PROC_H_
#define UI_VIEWS_EXAMPLES_EXAMPLES_MAIN_PROC_H_

#include "ui/views/examples/create_examples.h"
#include "ui/views/examples/example_base.h"
#include "ui/views/examples/examples_exit_code.h"

namespace views::examples {

ExamplesExitCode ExamplesMainProc(bool under_test = false,
                                  ExampleVector examples = ExampleVector());

}  // namespace views::examples

#endif  // UI_VIEWS_EXAMPLES_EXAMPLES_MAIN_PROC_H_
