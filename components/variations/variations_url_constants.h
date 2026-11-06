// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Variations URL constant declarations
// summary: Declares the default variations seed server URL constants for use by the variations component.
// ---

#ifndef COMPONENTS_VARIATIONS_VARIATIONS_URL_CONSTANTS_H_
#define COMPONENTS_VARIATIONS_VARIATIONS_URL_CONSTANTS_H_

#include "base/component_export.h"

namespace variations {

COMPONENT_EXPORT(VARIATIONS) extern const char kDefaultServerUrl[];

COMPONENT_EXPORT(VARIATIONS) extern const char kDefaultInsecureServerUrl[];

}  // namespace variations

#endif  // COMPONENTS_VARIATIONS_VARIATIONS_URL_CONSTANTS_H_
