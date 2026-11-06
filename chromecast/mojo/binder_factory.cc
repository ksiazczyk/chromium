// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MultiBinderFactory implementation
// summary: Implements the MultiBinderFactory constructor and destructor declared in binder_factory.h for the chromecast namespace.
// ---

#include "chromecast/mojo/binder_factory.h"

namespace chromecast {

MultiBinderFactory::MultiBinderFactory() = default;

MultiBinderFactory::~MultiBinderFactory() {
  DCHECK_CALLED_ON_VALID_SEQUENCE(sequence_checker_);
}

}  // namespace chromecast
