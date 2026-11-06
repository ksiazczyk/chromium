// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Left-most GC base test fixture
// summary: Test header with class hierarchies placing GarbageCollected bases left or right to check the plugin's left-most GC base requirement.
// ---

#ifndef LEFT_MOST_GC_BASE_H_
#define LEFT_MOST_GC_BASE_H_

#include "heap/stubs.h"

namespace blink {

class A { };
class B { };

class Right : public A, public B, public GarbageCollected<Right> { };  // Error
class Left : public GarbageCollected<Left>, public B, public A { };

class DerivedRight : public Right, public Left { };  // Error
class DerivedLeft : public Left, public Right { };

class C : public GarbageCollected<C> {
public:
 virtual void Trace(Visitor*) const;
};

class IllFormed : public A, public C { }; // Error

class LeftMixin : public GarbageCollectedMixin {
public:
 virtual void Trace(Visitor*) const;
};

class DerivedLeftMixin : public LeftMixin, public GarbageCollected<DerivedLeftMixin> {
};

}

#endif  // LEFT_MOST_GC_BASE_H_
