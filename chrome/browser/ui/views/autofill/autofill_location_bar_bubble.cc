// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill location bar bubble implementation
// summary: Implements AutofillLocationBarBubble, providing the IsMouseHovered override for Autofill bubbles anchored to the location bar.
// ---

#include "chrome/browser/ui/views/autofill/autofill_location_bar_bubble.h"

#include "ui/base/metadata/metadata_impl_macros.h"

namespace autofill {

bool AutofillLocationBarBubble::IsMouseHovered() const {
  return views::View::IsMouseHovered();
}

BEGIN_METADATA(AutofillLocationBarBubble)
END_METADATA

}  // namespace autofill
