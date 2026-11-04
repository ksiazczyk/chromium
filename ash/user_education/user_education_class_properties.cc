// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Help bubble context property definition
// summary: Defines the kHelpBubbleContextKey UI class property used to tag tracked elements with a help bubble context.
// ---

#include "ash/user_education/user_education_class_properties.h"

DEFINE_EXPORTED_UI_CLASS_PROPERTY_TYPE(ASH_EXPORT, ash::HelpBubbleContext)

namespace ash {

DEFINE_UI_CLASS_PROPERTY_KEY(HelpBubbleContext,
                             kHelpBubbleContextKey,
                             HelpBubbleContext::kDefault)

}  // namespace ash
