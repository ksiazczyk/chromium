// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Elastic overscroll switch utilities interface
// summary: Declares functions that report whether elastic overscroll is supported and enabled on the root scroller.
// ---

#ifndef UI_BASE_UI_BASE_SWITCHES_UTIL_H_
#define UI_BASE_UI_BASE_SWITCHES_UTIL_H_

#include "base/component_export.h"

namespace switches {

COMPONENT_EXPORT(UI_BASE) bool IsElasticOverscrollEnabledOnRoot();
COMPONENT_EXPORT(UI_BASE) bool IsElasticOverscrollSupported();

}  // namespace switches

#endif  // UI_BASE_UI_BASE_SWITCHES_UTIL_H_
