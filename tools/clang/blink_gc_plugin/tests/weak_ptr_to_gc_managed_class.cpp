// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WeakPtr to GC managed class test source
// summary: C++ test input that exercises the blink-gc plugin's checks for base::WeakPtr fields and locals pointing to garbage-collected classes.
// ---

#include "weak_ptr_to_gc_managed_class.h"

namespace blink {

void Foo() {
  base::WeakPtr<GCed> gced;
  base::WeakPtr<Mixin> mixin;
  base::WeakPtr<NonGCed> nongced;  // OK
}

}  // namespace blink
