// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Link-to-Text constants
// summary: Declares the 500 millisecond timeout applied to link generation requests.
// ---

#ifndef IOS_CHROME_BROWSER_LINK_TO_TEXT_MODEL_LINK_TO_TEXT_CONSTANTS_H_
#define IOS_CHROME_BROWSER_LINK_TO_TEXT_MODEL_LINK_TO_TEXT_CONSTANTS_H_

#include "base/time/time.h"

namespace link_to_text {

// Duration before timing out link generation requests.
constexpr base::TimeDelta kLinkGenerationTimeout = base::Milliseconds(500);

}  // namespace link_to_text

#endif  // IOS_CHROME_BROWSER_LINK_TO_TEXT_MODEL_LINK_TO_TEXT_CONSTANTS_H_
