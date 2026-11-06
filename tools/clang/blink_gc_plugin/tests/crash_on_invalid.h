// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Regression test for http://crbug.com/421958

// ---docerion
// type: test
// title: Crash on invalid regression test header
// summary: Regression test header for crbug 421958 declaring a garbage-collected Gamepad class whose invalid base and type names previously crashed the plugin.
// ---

#ifndef CRASH_ON_INVALID_H_
#define CRASH_ON_INVALID_H_

namespace blink {

class Visitor;
class GamepadCommon {};
class ScriptWrappable {};

class Gamepad final : public GarbageCollected<Gamepad>,
                      public GamepadCommon,
                      public ScriptWrappable {
 public:
  virtual const WrapperTypeInfo* wrapperTypeInfo() const {}
  void Trace(Visitor*) const;
};
}

#endif  // CRASH_ON_INVALID_H_
