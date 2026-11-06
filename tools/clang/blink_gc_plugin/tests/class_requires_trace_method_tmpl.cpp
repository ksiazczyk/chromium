// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: class_requires_trace_method_tmpl test source
// summary: Test input for the blink-gc plugin checking trace method requirements for classes derived from templated garbage-collected objects.
// ---

#include "class_requires_trace_method_tmpl.h"

namespace blink {

// Does not need a Trace method.
class NoTrace : public TemplatedObject<PartObjectA> { };

// Needs a Trace method.
class NeedsTrace : public TemplatedObject<PartObjectB> { };

}
