// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ref-counted event arguments type for extension events
// summary: Defines the EventArgs alias, a ref-counted wrapper around base::ListValue that lets event arguments be shared across dispatches to multiple listeners without copying.
// ---

#ifndef EXTENSIONS_COMMON_EVENT_ARGS_H_
#define EXTENSIONS_COMMON_EVENT_ARGS_H_

#include "base/memory/ref_counted.h"
#include "base/values.h"

namespace extensions {

// Ref-counted wrapper around base::ListValue for event arguments, allowing
// arguments to be shared across dispatches to multiple listeners without
// copying.
using EventArgs = base::RefCountedData<base::ListValue>;

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_EVENT_ARGS_H_
