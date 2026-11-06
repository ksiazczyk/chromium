// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Off-heap collections of Members test header
// summary: Header defining a garbage-collected Base class used by the Member collections test.
// ---

#ifndef COLLECTION_OF_MEMBERS_H_
#define COLLECTION_OF_MEMBERS_H_

#include "heap/stubs.h"

namespace blink {

class Base : public GarbageCollected<Base> {
 public:
  virtual void Trace(Visitor*) const {}
};

}  // namespace blink

#endif  // COLLECTION_OF_MEMBERS_H_
