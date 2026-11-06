// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AXHypertext implementation
// summary: Implements the default constructors, destructor and copy assignment for the AXHypertext struct.
// ---

#include "ui/accessibility/ax_hypertext.h"

namespace ui {

AXHypertext::AXHypertext() = default;
AXHypertext::~AXHypertext() = default;
AXHypertext::AXHypertext(const AXHypertext& other) = default;
AXHypertext& AXHypertext::operator=(const AXHypertext& other) = default;

}  // namespace ui
