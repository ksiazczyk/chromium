// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TranslateInitDetails implementation
// summary: Implements the default constructor, copy constructor and destructor of the TranslateInitDetails struct that carries page translation initialization data.
// ---

#include "components/translate/core/browser/translate_init_details.h"

namespace translate {
TranslateInitDetails::TranslateInitDetails() = default;
TranslateInitDetails::TranslateInitDetails(TranslateInitDetails& other) =
    default;
TranslateInitDetails::~TranslateInitDetails() = default;
}  // namespace translate
