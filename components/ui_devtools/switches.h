// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UI DevTools command-line switch declaration
// summary: Declares the exported enable-ui-devtools switch constant used to enable the UI DevTools server for UI surfaces.
// ---

#ifndef COMPONENTS_UI_DEVTOOLS_SWITCHES_H_
#define COMPONENTS_UI_DEVTOOLS_SWITCHES_H_

#include "components/ui_devtools/devtools_export.h"

namespace ui_devtools {
namespace switches {

UI_DEVTOOLS_EXPORT extern const char kEnableUiDevTools[];

}  // namespace switches
}  // namespace ui_devtools

#endif  // COMPONENTS_UI_DEVTOOLS_SWITCHES_H_
