// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AtomicBoolean class declaration
// summary: Declares the Chrome implementation of the Nearby AtomicBoolean platform API wrapping a std::atomic_bool value.
// ---

#ifndef CHROME_SERVICES_SHARING_NEARBY_PLATFORM_ATOMIC_BOOLEAN_H_
#define CHROME_SERVICES_SHARING_NEARBY_PLATFORM_ATOMIC_BOOLEAN_H_

#include <atomic>

#include "third_party/nearby/src/internal/platform/implementation/atomic_boolean.h"

namespace nearby::chrome {

// Concrete AtomicBoolean implementation.
class AtomicBoolean : public api::AtomicBoolean {
 public:
  explicit AtomicBoolean(bool initial_value);
  ~AtomicBoolean() override;

  AtomicBoolean(const AtomicBoolean&) = delete;
  AtomicBoolean& operator=(const AtomicBoolean&) = delete;

  // api::AtomicBoolean:
  bool Get() const override;
  bool Set(bool value) override;

 private:
  std::atomic_bool value_;
};

}  // namespace nearby::chrome

#endif  // CHROME_SERVICES_SHARING_NEARBY_PLATFORM_ATOMIC_BOOLEAN_H_
