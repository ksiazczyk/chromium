// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lottie util implementation
// summary: Implements IsCustomizableLottieId, which checks whether a Lottie animation ID carries the customizable _CrOS prefix.
// ---

#include "ash/utility/lottie_util.h"

#include <string_view>

#include "base/strings/string_util.h"

namespace ash {

bool IsCustomizableLottieId(std::string_view id) {
  return base::StartsWith(id, kLottieCustomizableIdPrefix);
}

}  // namespace ash
