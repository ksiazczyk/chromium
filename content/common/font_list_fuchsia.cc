// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fuchsia font list stub
// summary: Fuchsia stub that returns an empty font list because font enumeration is not implemented there.
// ---

#include "content/common/font_list.h"

#include <memory>

#include "base/values.h"

namespace content {

base::ListValue GetFontList_SlowBlocking() {
  return base::ListValue();
}

}  // namespace content
