// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DefaultClock implementation
// summary: Implements DefaultClock, whose Now() returns Time::Now(), with a thread-safe shared instance.
// ---

#include "base/time/default_clock.h"

#include "base/no_destructor.h"
#include "base/time/time.h"

namespace base {

DefaultClock::~DefaultClock() = default;

Time DefaultClock::Now() const {
  return Time::Now();
}

// static
DefaultClock* DefaultClock::GetInstance() {
  static base::NoDestructor<DefaultClock> instance;
  return instance.get();
}

}  // namespace base
