// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: class_must_crtp_itself test source
// summary: Test input for the blink-gc plugin checking that garbage-collected classes specialize GarbageCollected with their own class.
// ---

#include "heap/stubs.h"

namespace blink {

class WrongClass {};

class RightClass : GarbageCollected<WrongClass> {};

template <class T>
struct TemplatedClass : GarbageCollected<TemplatedClass<T>> {};

template struct TemplatedClass<int>;

template <class T1>
struct TemplatedClass2 : GarbageCollected<TemplatedClass2<T1>> {};

extern template struct TemplatedClass2<double>;
template struct TemplatedClass2<double>;

}  // namespace blink
