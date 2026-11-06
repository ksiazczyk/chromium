// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Synthetic pen driver class declaration
// summary: Declares SyntheticPenDriver, a synthetic pointer driver for pen input that extends the synthetic mouse driver base and provides leave handling and weak pointer support.
// ---

#ifndef CONTENT_COMMON_INPUT_SYNTHETIC_PEN_DRIVER_H_
#define CONTENT_COMMON_INPUT_SYNTHETIC_PEN_DRIVER_H_

#include "content/common/input/synthetic_mouse_driver.h"

namespace content {

class SyntheticPenDriver final : public SyntheticMouseDriverBase {
 public:
  SyntheticPenDriver();

  SyntheticPenDriver(const SyntheticPenDriver&) = delete;
  SyntheticPenDriver& operator=(const SyntheticPenDriver&) = delete;

  ~SyntheticPenDriver() override;

  void Leave(int index = 0) override;

  base::WeakPtr<SyntheticPointerDriver> AsWeakPtr() override;

 private:
  base::WeakPtrFactory<SyntheticPenDriver> weak_ptr_factory_{this};
};

}  // namespace content

#endif  // CONTENT_COMMON_INPUT_SYNTHETIC_PEN_DRIVER_H_
