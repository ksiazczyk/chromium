// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SuccessBarrierCallback declaration
// summary: Declares a callback wrapper that runs its done callback once all calls report success, or immediately with false on any failure.
// ---

#ifndef COMPONENTS_DBUS_PROPERTIES_SUCCESS_BARRIER_CALLBACK_H_
#define COMPONENTS_DBUS_PROPERTIES_SUCCESS_BARRIER_CALLBACK_H_

#include <cstddef>

#include "base/component_export.h"
#include "base/functional/callback_forward.h"

// A callback wrapper that must be called |num_calls| times with an argument of
// true (indicates success) for |done_callback| to be called with true.  If the
// wrapper is called with false, |done_callback| is immediately run with an
// argument of false.  Further calls after |done_callback| has already been run
// will have no effect.
COMPONENT_EXPORT(COMPONENTS_DBUS)
base::RepeatingCallback<void(bool)> SuccessBarrierCallback(
    size_t num_calls,
    base::OnceCallback<void(bool)> done_callback);

#endif  // COMPONENTS_DBUS_PROPERTIES_SUCCESS_BARRIER_CALLBACK_H_
