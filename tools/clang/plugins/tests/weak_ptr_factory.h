// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: weak_ptr_factory test stub header
// summary: Stub header defining a minimal base::WeakPtrFactory template so the weak_ptr_factory plugin test can compile without real Chromium dependencies.
// ---

#ifndef WEAK_PTR_FACTORY_H_
#define WEAK_PTR_FACTORY_H_

namespace base {

template <typename T>
class WeakPtrFactory {
 public:
  explicit WeakPtrFactory(T*) {}
};

}  // namespace base

#endif  // WEAK_PTR_FACTORY_H_
