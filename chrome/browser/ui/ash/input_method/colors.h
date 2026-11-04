// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Semantic color resolver for input method UI
// summary: Declares ResolveSemanticColor, which maps cros_styles color names to SkColor values for the input method UI.
// ---

#ifndef CHROME_BROWSER_UI_ASH_INPUT_METHOD_COLORS_H_
#define CHROME_BROWSER_UI_ASH_INPUT_METHOD_COLORS_H_

#include "ui/chromeos/styles/cros_styles.h"

namespace ui {
namespace ime {

SkColor ResolveSemanticColor(const cros_styles::ColorName& color_name);

}  // namespace ime
}  // namespace ui

#endif  // CHROME_BROWSER_UI_ASH_INPUT_METHOD_COLORS_H_
