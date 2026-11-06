// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Printing context factory for tests
// summary: Declares an interface for creating PrintingContext instances in place of the platform default during tests.
// ---

#ifndef PRINTING_PRINTING_CONTEXT_FACTORY_FOR_TEST_H_
#define PRINTING_PRINTING_CONTEXT_FACTORY_FOR_TEST_H_

#include <memory>

#include "printing/printing_context.h"

namespace printing {

class PrintingContextFactoryForTest {
 public:
  virtual std::unique_ptr<PrintingContext> CreatePrintingContext(
      PrintingContext::Delegate* delegate,
      PrintingContext::OutOfProcessBehavior out_of_process_behavior) = 0;
};

}  // namespace printing

#endif  // PRINTING_PRINTING_CONTEXT_FACTORY_FOR_TEST_H_
