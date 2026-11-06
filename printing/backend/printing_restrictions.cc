// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Printing restrictions constants
// summary: Defines constant keys for ChromeOS printing restrictions such as allowed color, duplex and PIN modes, plus paper size field names.
// ---

#include "printing/backend/printing_restrictions.h"

#include "build/build_config.h"

namespace printing {

#if BUILDFLAG(IS_CHROMEOS)
const char kAllowedColorModes[] = "allowedColorModes";
const char kAllowedDuplexModes[] = "allowedDuplexModes";
const char kAllowedPinModes[] = "allowedPinModes";
const char kDefaultColorMode[] = "defaultColorMode";
const char kDefaultDuplexMode[] = "defaultDuplexMode";
const char kDefaultPinMode[] = "defaultPinMode";
#endif  // BUILDFLAG(IS_CHROMEOS)

const char kPaperSizeName[] = "name";
const char kPaperSizeNameCustomOption[] = "custom";
const char kPaperSizeCustomSize[] = "custom_size";
const char kPaperSizeWidth[] = "width";
const char kPaperSizeHeight[] = "height";

}  // namespace printing
