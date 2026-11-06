// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Aura view constants implementation
// summary: Defines the kHostViewKey Aura window property that associates a window with its host view.
// ---

#include "ui/views/view_constants_aura.h"

#include "ui/base/class_property.h"
#include "ui/views/view.h"

namespace views {

DEFINE_UI_CLASS_PROPERTY_KEY(views::View*, kHostViewKey, nullptr)

}  // namespace views
