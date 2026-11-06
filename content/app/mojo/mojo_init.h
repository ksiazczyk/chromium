// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring InitializeMojo
// summary: Header declaring the CONTENT_EXPORT function InitializeMojo, which performs necessary Mojo initialization.
// ---

#ifndef CONTENT_APP_MOJO_MOJO_INIT_H_
#define CONTENT_APP_MOJO_MOJO_INIT_H_

#include "content/common/content_export.h"

namespace content {

// Perform any necessary Mojo initialization.
CONTENT_EXPORT void InitializeMojo();

}  // namespace content

#endif  // CONTENT_APP_MOJO_MOJO_INIT_H_
